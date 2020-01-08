#include <string>
using std::string;

#include <vector>
using std::vector;

#include <memory>
using std::shared_ptr;

#include <map>
#include <set>
#include <fstream>
#include <iostream>

class QueryResult;

class TextQuery {
public:
	using LineNo = vector<string>::size_type;
	//vector<string> Line;
	TextQuery(std::ifstream&);
	QueryResult query(const string& word) const;
private:
	std::shared_ptr<vector<string>> input;
	std::map<string, shared_ptr<std::set<LineNo>>> result;
};

class QueryResult
{
public:
	friend std::ostream& print(std::ostream&, const QueryResult&);
public:
	QueryResult(
		string s, 
		shared_ptr<std::set<TextQuery::LineNo>> set, 
		shared_ptr<vector<string>> v
	) 
		: word(s), nos(set), input(v) 
	{
	}

private:
	string word;
	shared_ptr<std::set<TextQuery::LineNo>> nos;
	shared_ptr<vector<string>> input;
};

std::ostream& print(std::ostream&, const QueryResult&);

