#include <iostream>
#include <string>


struct Item
{
	std::string name;
	int cost;
	int quantity;
};

struct Shop
{
	int ShopGold = 1500;
	Item Items[4];

	void ChangePrice(std::string ItemName, int newCost)
	{
		for (int i = 0; i < 4; i++)
		{
			if (Items[i].name == ItemName)
			{
				Items[i].cost = newCost;
			}
		}
	}
	void AddStock(std::string ItemName, int quantity)
	{
		for (int i = 0; i < 4; i++)
		{
			if (Items[i].quantity == quantity)
			{
				Items[i].quantity++;
				ShopGold -= 100;
			}
		}
	}
	void SellStock(std::string ItemName, int quantity)
	{
		for (int i = 0; i < 4; i++)
		{
			if (Items[i].quantity == quantity)
			{
				Items[i].quantity--;
				ShopGold += 110;
			}
		}
	}
};



void main()
{
	Item HealthPotion;
	HealthPotion.name = "HealthPotion";
	HealthPotion.cost = 25;
	HealthPotion.quantity = 5;
	Item ManaPotion;
	ManaPotion.name = "ManaPotion";
	ManaPotion.cost = 30;
	ManaPotion.quantity = 5;
	Item Sword;
	Sword.name = "Sword";
	Sword.cost = 75;
	Sword.quantity = 3;
	Item Shield;
	Shield.name = "Shield";
	Shield.cost = 70;
	Shield.quantity = 2;

	Shop JordanShop;
	JordanShop.Items[0] = HealthPotion;
	JordanShop.Items[1] = ManaPotion;
	JordanShop.Items[2] = Sword;
	JordanShop.Items[3] = Shield;
	JordanShop.ChangePrice("HealthPotion", 55);
}