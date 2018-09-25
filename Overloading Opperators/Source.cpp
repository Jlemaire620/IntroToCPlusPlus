class Point2D
{
public:
	float mXPos;
	float mYPos;
	
	bool operator!=(Point2D& right)
	{
		bool xEval = this->mXPos != right.mXPos;
		bool yEval = this->mYPos != right.mYPos;
		return xEval == true || yEval == true;
	}

	Point2D operator-(Point2D& right)
	{
		float xEv = this->mXPos - right.mXPos;
		float yEv = this->mYPos - right.mYPos;
		return {xEv, yEv};
	}

	bool operator == (Point2D& right)
	{
		bool xEqu = this->mXPos == right.mXPos;
		bool yEqu = this->mYPos == right.mYPos;
		return xEqu == true || yEqu == true;
	}

	Point2D operator+ (Point2D& right)
	{
		float xEva = this->mXPos + right.mXPos;
		float yEva = this->mYPos + right.mYPos;
		return { xEva, yEva };
	}
};


int main()
{
	Point2D a = { 1,2 };
	Point2D b = { 2,1 };
	bool cmp = a != b;
	Point2D c = a - b;
	bool d = a == b;
	Point2D e = a + b;
}