#include<iostream>
#include<string>//stringのための文字列のヘッダをinclude
using namespace std;
class history
{
	public:
	int person; //何人目
	char zidai[30];//活躍した時代
	char name[80];//名前
	char action[100];//やったこと
	void ShowData();//データの出力
};
void history::ShowData() //これをプリント
{
	cout<<person<<"人目"<<endl;
	cout<<zidai<<endl;
	cout<<name<<endl;
	cout<<action<<endl;

	return;
}
int main()
{
	history nobunaga;
	history hideyoshi;
	history ieyasu;
	history hirohumi;
	history tadataka;
	history himiko;
	history taishi;
	history yoritomo;
	history takauzi;
	history add;

	nobunaga.person=1; //一人目
	strcpy(nobunaga.zidai,"戦国時代");
	strcpy(nobunaga.name,"織田信長");
	strcpy(nobunaga.action,"本能寺の変");
	nobunaga.ShowData();

	hideyoshi.person=2; //二人目
	strcpy(hideyoshi.zidai,"戦国時代");
	strcpy(hideyoshi.name,"豊臣秀吉");
	strcpy(hideyoshi.action,"天下統一");
	hideyoshi.ShowData();

	ieyasu.person=3; //三人目
	strcpy(ieyasu.zidai,"江戸時代");
	strcpy(ieyasu.name,"徳川家康");
	strcpy(ieyasu.action,"江戸幕府");
	ieyasu.ShowData();

	hirohumi.person=4; //四人目
	strcpy(hirohumi.zidai,"明治時代");
	strcpy(hirohumi.name,"伊藤博文");
	strcpy(hirohumi.action,"初代内閣");
	hirohumi.ShowData();

	tadataka.person=5; //五人目
	strcpy(tadataka.zidai,"江戸時代");
	strcpy(tadataka.name,"伊能忠敬");
	strcpy(tadataka.action,"測量");
	tadataka.ShowData();

	himiko.person=6; //六人目
	strcpy(himiko.zidai,"弥生時代");
	strcpy(himiko.name,"卑弥呼");
	strcpy(himiko.action,"邪馬台国");
	himiko.ShowData();

	taishi.person=7; //七人目
	strcpy(taishi.zidai,"飛鳥時代");
	strcpy(taishi.name,"聖徳太子");
	strcpy(taishi.action,"法隆寺");
	taishi.ShowData();

	yoritomo.person=8; //八人目
	strcpy(yoritomo.zidai,"鎌倉時代");
	strcpy(yoritomo.name,"源頼朝");
	strcpy(yoritomo.action,"鎌倉幕府");
	yoritomo.ShowData();

	takauzi.person=9; //九人目
	strcpy(takauzi.zidai,"室町時代");
	strcpy(takauzi.name,"足利尊氏");
	strcpy(takauzi.action,"室町幕府");
	takauzi.ShowData();

	add.person=0;
	int a;
	cout<<"追加したい出来事があったら「1」を、なにもなかったら「2」を入力してください"<<endl;
	cin>>a;
	if(a==1){
		cout<<"何人目？"<<endl;
		cin>>add.person;

		cout<<"何時代の人？"<<endl;
		cin>>add.zidai;

		cout<<"名前は？"<<endl;
		cin>>add.name;

		cout<<"何をした人？"<<endl;
		cin>>add.action;

		add.ShowData();

	}
	else if(a==2){
		cout<<"終了します"<<endl;
	}
	getchar();
	return 0;
}
