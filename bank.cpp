#include <iostream>
class bank{
private:
    int pincode;
    int money;//это баланс
    int four;//долен выводить ошибку при том если мы пытаемся снимать больше чем есть 
public:
    void pin(int pinpin){
        pinpin = pincode;
        if(pincode == true){
            std::cout<<"Введите пороль еще раз"<<std::endl;
        }
    }

    void error_org(int errorr){
        four = errorr;
        if(four > money){
            std::cout<<"Ошибка не достаточно средст на счете";
        }
    }
    void money_org(int balans){
        money = balans;
    }
    void org(int four_n){
        four = four_n;
    }
    };
int main(){
    bank a;

    int blat;
    int menu;
    int four;
    int errorr;
    int balans;
    std::cout<<"Введите баланс";
    std::cin>>four;
   int pin = 0;
while (true) {
    std::cout << "Введите 4-значный пин-код: ";
    std::cin >> pin;
    if (pin >= 1000 && pin <= 9999) {
        break; 
    }
    std::cout << "Ошибка! Пин-код должен состоять ровно из 4 цифр.\n";
}

    

    int cheak_money;
    a.money_org(balans);
    a.org(four);
    a.error_org(errorr);
    a.pin(pin);


    while(menu){
        std::cout<<"1.Снять средства"<<std::endl;
        std::cout<<"2.Показать средства"<<std::endl;
         std::cout<<"3.Уйти"<<std::endl;
         std::cout<<" Выбор человека: ";
        std::cin >> menu;
        switch(menu){
           
    case 1:
     a.pin(pin);
    std::cout << "Введите сумму: ";
    std::cin >> cheak_money;
    if (cheak_money > four) {
        std::cout << "Ошибка: недостаточно средств на счете!" << std::endl;
    } else {
        four -= cheak_money;
        std::cout << "Остаток по счету: " << four << " рублей" << std::endl;
    }
    break;
            case 2:
            std::cout<<"Ваш счет составляет: "<<std::endl;
            std::cout<<four<<" рублей"<<std::endl;
           
            break;
        
            case 3:
            std::cout<<"Счасливого пути!!!";
            return 0;

            
        }
    }
    
    return 0;
}