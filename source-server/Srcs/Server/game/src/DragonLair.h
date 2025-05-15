#include <boost/unordered_map.hpp>

#include "../../common/stl.h"

class CDragonLair
{
	public:
		CDragonLair (DWORD dwGuildID, long BaseMapID, long PrivateMapID);
		virtual ~CDragonLair ();

		DWORD GetEstimatedTime () const;

		void OnDragonDead (LPCHARACTER pDragon);

	private:
		DWORD StartTime_;
		DWORD GuildID_;
		[[maybe_unused]] long BaseMapIndex_;
		[[maybe_unused]] long PrivateMapIndex_;
};

class CDragonLairManager : public singleton<CDragonLairManager>
{
	public:
		CDragonLairManager ();
		virtual ~CDragonLairManager ();

		bool Start (long MapIndexFrom, long BaseMapIndex, DWORD GuildID);
		void OnDragonDead (LPCHARACTER pDragon, DWORD KillerGuildID);

		size_t GetLairCount () const { return LairMap_.size(); }

	private:
		boost::unordered_map<DWORD, CDragonLair*> LairMap_;
};
//martysama0134's 623a0779c74cb7565145d45548376308
