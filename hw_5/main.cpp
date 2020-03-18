//某老板想要一个能快速计算订单价格的程序，请你帮他设计一个类：
//1、这个类里需要原价和数量，原价从一个数组中读出即可（自行定义数组），数量需要初始化。
//2、老板会不定期调整价格，调整的方式是通过调整一个价格系数，这个系数乘以原价即为最终价格，这个折扣会影响到所有产品。
//请你设计出一个类能让老板轻松搞定这一切。
//
//四、模拟麻将
//※规则比较复杂，不懂麻将的可以适当简化
//1、设计一个麻将类，拥有以下功能：
//①初始化生成随机牌山（136张）
//②摇骰子（随机数）动作随机生成1个随机数，采用1次摇骰的方式（2~12）决定牌山开始断开的位置，规则如下：
//a、136张麻将2个为一墩，一边17墩，共4边（2 * 17 * 4 = 136）
//b、以庄家（东家）的位置为第一边，下家（南家）的位置为第二边，对家（西家）的位置为第三边，上家（北家）的位置为第四边
//c、投出5、9，从自家面前的牌山（第一边）取，投出2、6、10，从下家面前的牌山（第二边）取，同理，投出3、7、11，对家，投出4、8、12，上家。取的时候会根据骰子掷出的点数来判断开始取的位置，例如骰子的点数为2，则从下面前的牌堆中，从第二墩后开始取。也就是34(下家要跳过的张数) + 2(墩) * 2(一墩两个) = 38张后，也就是第39张开始取。取出的规则为，每人每次取出四张，取三圈（此时一人12张）后，一人再拿一张（13张了）。之后由庄家（东家）开始摸牌打牌。
//2、设计一个玩家类，拥有以下功能：
//①初始化13张手牌，按照万、饼、条、风的顺序升序排序，例如：
//一万 三万 九万 二饼 八饼 三条 五条 八条 东风 南风 北风 白板 红中
//②拥有摸牌、打牌功能。提示：麻将中只能保持13张手牌，摸到一张必然会紧接着打一张，这是一个方法。
//3、设计测试函数，让四个人可以开始打麻将。
//
//三、设计一个日期类，包含以下功能：
//1、只能通过传入年月日初始化。
//2、可以加上一个数字n，返回一个该日期后推n天之后的日期。


#include "date.h"

int main() {
	//int year, delay;
	//_uint month, day;

	//cout << "请输入开始的年、月、日" << endl;
	//cin >> year >> month >> day;

	//Date test(year, month, day);

	//cout << "请输入间隔的天数" << endl;
	//cin >> delay;
	//cout << "最终的年、月、日为：" << endl;
	//if (delay >= 0) {
	//	cout << (test + delay) << endl;
	//}
	//else {
	//	delay *= -1;
	//	cout << test - delay << endl;
	//}

	int year_1, year_2;
	_uint month_1, day_1, month_2, day_2;
	cout << "请输入开始的年、月、日" << endl;
	cin >> year_1 >> month_1 >> day_1;
	Date test_1(year_1, month_1, day_1);
	cout << "请输入截至的年、月、日" << endl;
	cin >> year_2 >> month_2 >> day_2;
	Date test_2(year_2, month_2, day_2);

	cout << "总共间隔了" << (test_1 - test_2) << "天" << endl;

	return 0;
}


int main_0() {
	char* pa = new char[1024];
	size_t size = 0;

	Date* pd = new(pa + size)Date(2020, 01, 16);

	pd->~Date();
	delete pa;

	return 0;
}