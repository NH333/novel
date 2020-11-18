new Vue({
    el: '#app',
    data: function () {
        return {
            // input: '',
            // value1: '',
            userInfo: {
                name: '',
                gender: '',
                phoneNumber: '',
                birthday: '',
            },
            tableData: [{
                name: '风花雪月',
                gender: '女生',
                phoneNumber: '18934242342',
                birthday: '2010-12-09',
            },
            {
                name: '风花雪月',
                gender: '女生',
                phoneNumber: '18934242342',
                birthday: '2010-12-09',
            }],
            dialogVisible: false,  // 弹窗的显示
            editObj: {
                name: '',
                gender: '',
                phoneNumber: '',
                birthday: '',
            },
            userIndex: 0,
        }
    },
    methods: {
        // 添加用户信息
        addUser() {
            if (!this.userInfo.name) {
                this.$message({
                    message: '请输入姓名！',
                    type: 'warning'
                });
                return;
            }
            if (!this.userInfo.gender) {
                this.$message({
                    message: '请输入性别！',
                    type: 'warning'
                });
                return;
            }
            if (!/^1[3456789]\d{9}$/.test(this.userInfo.phoneNumber)) {
                this.$message({
                    message: '请输入正确的手机号码！',
                    type: 'warning'
                });
                return;
            }
            if (!this.userInfo.birthday) {
                this.$message({
                    message: '请输入生日！',
                    type: 'warning'
                });
                return;
            }
            this.tableData.push(this.userInfo);
            this.userInfo = {
                name: '',
                gender: '',
                phoneNumber: '',
                birthday: '',
            }
        },

        // 删除用户信息
        deleteUser(index) {
            this.$confirm('确认删除？')
                .then(_ => {
                    this.tableData.splice(index, 1);
                })
                .catch(_ => { });
        },

        handleClose(done) {
            this.$confirm('确认关闭？')
                .then(_ => {
                    done();
                })
                .catch(_ => { });
        },

        editUser(item, userIndex) {
            this.userIndex = userIndex;
            this.editObj = {
                name: item.name,
                gender: item.gender,
                phoneNumber: item.phoneNumber,
                birthday: item.birthday,
            }
            this.dialogVisible = true;
        },

        onUserDataChanged() {
            // 这种方式 vue 无法监听到数据的改变，需要使用 Vue.set 或者 watch
            // this.tableData[this.userIndex] = this.editObj;
            Vue.set(this.tableData, this.userIndex, this.editObj);
            this.dialogVisible = false;
        }
    }
})