#include "12_27.h"
#include <sstream>

TextQuery::TextQuery(std::ifstream& ifs) : input(new vector<string>) {
	string text;
	while (std::getline(ifs, text)) {
		input->push_back(text);
		int n = input->size() - 1;
		std::istringstream line(text);
		string word;
		while (line >> word) {
			auto& nos = result[word];           //这个引用要理解清楚
			if (!nos) {
				nos.reset(new std::set<LineNo>); //释放掉当前对象，用括号内的内容初始化
			}
			nos->insert(n);
		}
	}
}

QueryResult TextQuery::query(const string& word) const {
	static shared_ptr<std::set<LineNo>> nodata(new std::set<LineNo>);
	auto found = result.find(word);
	if (found == result.end()) {
		return QueryResult(word, nodata, input);
	}
	else
	{
		return QueryResult(word, found->second, input);
	}
}

std::ostream& print(std::ostream& out, const QueryResult& qr)
{
	out << qr.word << " occurs " << qr.nos->size()
		<< (qr.nos->size() > 1 ? " times" : " time") << std::endl;
	for (auto i : *qr.nos)
		out << "\t(line " << i + 1 << ") " << qr.input->at(i) << std::endl;
	return out;
}