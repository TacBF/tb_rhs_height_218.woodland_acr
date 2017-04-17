#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1}      	, {}   	, 1      , {}        , 0    , "Town" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3}  		, {}    , 1      , {}        , 0    , "Height 218" },
{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {4}      	, {}  	, 1      , {}        , 0    , "Radio Tower" },
{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {5}      	, {}    , 1      , {}        , 0    , "Factory" },
{ 7, TEAM_BLUE,	 	SPAWN_NEVER,    {6}			, {}    , 1      , {}        , 0    , "Kolhoz" },
{ 8, TEAM_BLUE, 	SPAWN_NEVER,    {7}      	, {}    , 1      , {}		 , 0    , "Aircraft wreck" },
{ 9, TEAM_BLUE, 	SPAWN_NEVER,  	{8}			, {}    , 1      , {}    	 , 0    , "Gas station" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {8}     , 2    , "HIDDEN" },
{ 11,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {4}     , 2    , "HIDDEN" }
};