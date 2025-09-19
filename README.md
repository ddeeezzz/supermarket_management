# 超市商品管理系统

基于 Qt 6 + C++17 开发的跨平台超市商品管理系统，提供完整的商品管理、用户认证和审核流程功能。

## 功能特性

### 🔐 用户管理
- 用户登录认证系统
- 多用户权限管理
- 用户注册功能
- 个人中心管理

### 📦 商品管理
- 商品信息增删改查
- 商品库存统计
- 批量操作支持
- 商品分类管理

### ✅ 审核系统
- 商品审核工作流
- 待审核商品管理
- 审核状态跟踪

### 💾 数据管理
- SQLite 数据库存储
- 数据持久化
- 分页查询支持

## 技术栈

- **框架**: Qt 6
- **语言**: C++17
- **数据库**: SQLite
- **构建系统**: qmake
- **架构模式**: Model-View-Controller (MVC)

## 项目结构

```
supermar_management/
├── main.cpp                    # 应用程序入口
├── mainwindow.*               # 主窗口
├── page_lolgin.*              # 登录页面
├── page_personalcenter.*      # 个人中心页面
├── prosql.*                   # 数据库操作类
├── dlg_addpro.*              # 添加商品对话框
├── dlg_adduser.*             # 添加用户对话框
├── dlg_ispass.*              # 审核对话框
├── mainwindow_ispass.*       # 审核管理窗口
├── mainwindow_userstab.*     # 用户管理窗口
├── *.ui                      # Qt Designer 界面文件
├── res.qrc                   # 资源文件
└── build/                    # 构建输出目录
```

## 系统要求

- Qt 6.7.1 或更高版本
- MinGW 64-bit 编译器
- Windows/Linux/macOS

## 安装与运行

### 环境准备

1. 安装 Qt 6.7.1 开发环境
2. 确保 MinGW 64-bit 编译器已配置

### 编译步骤

1. 克隆项目到本地
```bash
git clone <repository-url>
cd supermar_management
```

2. 使用 Qt Creator 打开项目
```bash
# 在 Qt Creator 中打开 supermar_management.pro
```

3. 配置构建套件
- 选择 Desktop Qt 6.7.1 MinGW 64-bit
- 选择 Release 或 Debug 模式

4. 构建项目
- 点击构建按钮或按 Ctrl+B

### 运行程序

构建完成后，可执行文件位于：
```
build/Desktop_Qt_6_7_1_MinGW_64_bit-Release/release/supermar_management.exe
```

## 使用说明

### 首次启动

1. 运行程序后会自动创建 SQLite 数据库文件 `data.db`
2. 系统会显示登录界面
3. 可以注册新用户或使用默认管理员账户

### 主要操作

#### 商品管理
- **添加商品**: 点击"添加"按钮，填写商品信息
- **修改商品**: 选中商品后点击"修改"按钮
- **删除商品**: 选中商品后点击"删除"按钮
- **查询商品**: 使用搜索功能快速定位商品

#### 用户管理
- 在用户管理标签页中可以添加、删除和修改用户信息
- 支持设置不同的用户权限级别

#### 审核管理
- 查看待审核商品列表
- 批准或拒绝商品申请

### 快捷键

- `F6`: 重新加载样式表 (支持实时UI调试)

## 数据库结构

### 主要数据表

#### product (商品表)
- `id`: 商品ID
- `proid`: 商品编号
- `name`: 商品名称
- `type`: 商品类型
- `price`: 商品价格
- `count`: 库存数量

#### users (用户表)
- `username`: 用户名
- `password`: 密码
- `auth`: 权限级别

#### product_passing (待审核商品表)
- `id`: 记录ID
- `proid`: 商品编号
- `name`: 商品名称
- `type`: 商品类型
- `unit_price`: 单价
- `count`: 数量
- `total_price`: 总价

## 开发特性

### 自定义UI组件
- `HoveredRowItemDelegate`: 自定义行悬停效果
- 支持 QSS 样式表自定义界面外观

### 信号槽机制
- 使用 Qt 信号槽实现模块间通信
- 事件驱动的响应式架构

### 单例模式
- `proSql` 类采用单例模式管理数据库连接
- 确保全局数据访问的一致性