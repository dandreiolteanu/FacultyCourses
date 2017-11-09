#pragma once
#include "PlayList.h"

class CSV : public PlayList
{
public:
	void writeToFilePL() override
	{
		std::ofstream fout("PlayList.csv");
		for (auto it : movies)
			fout << it;
		fout.close();
	}

	void executeThingsPL() override
	{
		this->writeToFilePL();
        system("open /Users/olteanuandrei/Library/Developer/Xcode/DerivedData/LMDB-bvmgnqxrcsfqnyagdkuwjrjrmsmn/Build/Products/Debug/PlayList.csv ");
	}
};
