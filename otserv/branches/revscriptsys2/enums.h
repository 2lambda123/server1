
// This file has been automatically generated by a script.
// Do not make changes to this file manually, as they will be discarded
// as soon as the project is recompiled

#ifndef ENUMS_H
#define ENUMS_H
#include "enum.h"

namespace enums {
	enum RaceType {
		RACE_NONE,
		RACE_VENOM ,
		RACE_BLOOD,
		RACE_UNDEAD,
		RACE_FIRE,
		RACE_ENERGY,
	}; // end enum
} // end namespace

typedef Enum<enums::RaceType, enums::RACE_ENERGY + 1> RaceType;

typedef Enum<enums::RaceType, enums::RACE_ENERGY + 1> RaceType__Base;

//begin enum definitions
	const RaceType RACE_NONE(enums::RACE_NONE);
	const RaceType RACE_VENOM (enums::RACE_VENOM );
	const RaceType RACE_BLOOD(enums::RACE_BLOOD);
	const RaceType RACE_UNDEAD(enums::RACE_UNDEAD);
	const RaceType RACE_FIRE(enums::RACE_FIRE);
	const RaceType RACE_ENERGY(enums::RACE_ENERGY);
//end enum definitions

namespace enums {
	enum CombatType {
		COMBAT_NONE = 0,
		COMBAT_PHYSICALDAMAGE = 1,
		COMBAT_ENERGYDAMAGE = 2,
		COMBAT_EARTHDAMAGE = 4,
		COMBAT_FIREDAMAGE = 8,
		COMBAT_UNDEFINEDDAMAGE = 16,
		COMBAT_LIFEDRAIN = 32,
		COMBAT_MANADRAIN = 64,
		COMBAT_HEALING = 128,
		COMBAT_DROWNDAMAGE = 256,
		COMBAT_ICEDAMAGE = 512,
		COMBAT_HOLYDAMAGE = 1024,
		COMBAT_DEATHDAMAGE = 2048,
	}; // end enum
} // end namespace

typedef BitEnum<enums::CombatType, 12> CombatType;

typedef Enum<enums::CombatType, 12> CombatType__Base;

//begin enum definitions
	const CombatType COMBAT_NONE(enums::COMBAT_NONE);
	const CombatType COMBAT_PHYSICALDAMAGE(enums::COMBAT_PHYSICALDAMAGE);
	const CombatType COMBAT_ENERGYDAMAGE(enums::COMBAT_ENERGYDAMAGE);
	const CombatType COMBAT_EARTHDAMAGE(enums::COMBAT_EARTHDAMAGE);
	const CombatType COMBAT_FIREDAMAGE(enums::COMBAT_FIREDAMAGE);
	const CombatType COMBAT_UNDEFINEDDAMAGE(enums::COMBAT_UNDEFINEDDAMAGE);
	const CombatType COMBAT_LIFEDRAIN(enums::COMBAT_LIFEDRAIN);
	const CombatType COMBAT_MANADRAIN(enums::COMBAT_MANADRAIN);
	const CombatType COMBAT_HEALING(enums::COMBAT_HEALING);
	const CombatType COMBAT_DROWNDAMAGE(enums::COMBAT_DROWNDAMAGE);
	const CombatType COMBAT_ICEDAMAGE(enums::COMBAT_ICEDAMAGE);
	const CombatType COMBAT_HOLYDAMAGE(enums::COMBAT_HOLYDAMAGE);
	const CombatType COMBAT_DEATHDAMAGE(enums::COMBAT_DEATHDAMAGE);
//end enum definitions

namespace enums {
	enum CombatParam {
		COMBATPARAM_COMBATTYPE = 1,
		COMBATPARAM_EFFECT = 2,
		COMBATPARAM_DISTANCEEFFECT = 3,
		COMBATPARAM_BLOCKEDBYSHIELD = 4,
		COMBATPARAM_BLOCKEDBYARMOR = 5,
		COMBATPARAM_TARGETCASTERORTOPMOST = 6,
		COMBATPARAM_CREATEITEM = 7,
		COMBATPARAM_AGGRESSIVE = 8,
		COMBATPARAM_DISPEL = 9,
		COMBATPARAM_USECHARGES = 10,
		COMBATPARAM_HITEFFECT = 11,
		COMBATPARAM_HITTEXTCOLOR = 12,
	}; // end enum
} // end namespace

typedef Enum<enums::CombatParam, enums::COMBATPARAM_HITTEXTCOLOR + 1> CombatParam;

typedef Enum<enums::CombatParam, enums::COMBATPARAM_HITTEXTCOLOR + 1> CombatParam__Base;

//begin enum definitions
	const CombatParam COMBATPARAM_COMBATTYPE(enums::COMBATPARAM_COMBATTYPE);
	const CombatParam COMBATPARAM_EFFECT(enums::COMBATPARAM_EFFECT);
	const CombatParam COMBATPARAM_DISTANCEEFFECT(enums::COMBATPARAM_DISTANCEEFFECT);
	const CombatParam COMBATPARAM_BLOCKEDBYSHIELD(enums::COMBATPARAM_BLOCKEDBYSHIELD);
	const CombatParam COMBATPARAM_BLOCKEDBYARMOR(enums::COMBATPARAM_BLOCKEDBYARMOR);
	const CombatParam COMBATPARAM_TARGETCASTERORTOPMOST(enums::COMBATPARAM_TARGETCASTERORTOPMOST);
	const CombatParam COMBATPARAM_CREATEITEM(enums::COMBATPARAM_CREATEITEM);
	const CombatParam COMBATPARAM_AGGRESSIVE(enums::COMBATPARAM_AGGRESSIVE);
	const CombatParam COMBATPARAM_DISPEL(enums::COMBATPARAM_DISPEL);
	const CombatParam COMBATPARAM_USECHARGES(enums::COMBATPARAM_USECHARGES);
	const CombatParam COMBATPARAM_HITEFFECT(enums::COMBATPARAM_HITEFFECT);
	const CombatParam COMBATPARAM_HITTEXTCOLOR(enums::COMBATPARAM_HITTEXTCOLOR);
//end enum definitions

namespace enums {
	enum CallBackParam {
		CALLBACKPARAM_LEVELMAGICVALUE,
		CALLBACKPARAM_SKILLVALUE,
		CALLBACKPARAM_TARGETTILECALLBACK,
		CALLBACKPARAM_TARGETCREATURECALLBACK,
	}; // end enum
} // end namespace

typedef Enum<enums::CallBackParam, enums::CALLBACKPARAM_TARGETCREATURECALLBACK + 1> CallBackParam;

typedef Enum<enums::CallBackParam, enums::CALLBACKPARAM_TARGETCREATURECALLBACK + 1> CallBackParam__Base;

//begin enum definitions
	const CallBackParam CALLBACKPARAM_LEVELMAGICVALUE(enums::CALLBACKPARAM_LEVELMAGICVALUE);
	const CallBackParam CALLBACKPARAM_SKILLVALUE(enums::CALLBACKPARAM_SKILLVALUE);
	const CallBackParam CALLBACKPARAM_TARGETTILECALLBACK(enums::CALLBACKPARAM_TARGETTILECALLBACK);
	const CallBackParam CALLBACKPARAM_TARGETCREATURECALLBACK(enums::CALLBACKPARAM_TARGETCREATURECALLBACK);
//end enum definitions

namespace enums {
	enum ConditionParam {
		CONDITIONPARAM_OWNER = 1,
		CONDITIONPARAM_TICKS = 2,
		CONDITIONPARAM_OUTFIT = 3,
		CONDITIONPARAM_HEALTHGAIN = 4,
		CONDITIONPARAM_HEALTHTICKS = 5,
		CONDITIONPARAM_MANAGAIN = 6,
		CONDITIONPARAM_MANATICKS = 7,
		CONDITIONPARAM_DELAYED = 8,
		CONDITIONPARAM_SPEED = 9,
		CONDITIONPARAM_LIGHT_LEVEL = 10,
		CONDITIONPARAM_LIGHT_COLOR = 11,
		CONDITIONPARAM_SOULGAIN = 12,
		CONDITIONPARAM_SOULTICKS = 13,
		CONDITIONPARAM_MINVALUE = 14,
		CONDITIONPARAM_MAXVALUE = 15,
		CONDITIONPARAM_STARTVALUE = 16,
		CONDITIONPARAM_TICKINTERVAL = 17,
		CONDITIONPARAM_FORCEUPDATE = 18,
		CONDITIONPARAM_SKILL_MELEE = 19,
		CONDITIONPARAM_SKILL_FIST = 20,
		CONDITIONPARAM_SKILL_CLUB = 21,
		CONDITIONPARAM_SKILL_SWORD = 22,
		CONDITIONPARAM_SKILL_AXE = 23,
		CONDITIONPARAM_SKILL_DISTANCE = 24,
		CONDITIONPARAM_SKILL_SHIELD = 25,
		CONDITIONPARAM_SKILL_FISHING = 26,
		CONDITIONPARAM_STAT_MAXHITPOINTS = 27,
		CONDITIONPARAM_STAT_MAXMANAPOINTS = 28,
		CONDITIONPARAM_STAT_SOULPOINTS = 29,
		CONDITIONPARAM_STAT_MAGICPOINTS = 30,
		CONDITIONPARAM_STAT_MAXHITPOINTSPERCENT = 31,
		CONDITIONPARAM_STAT_MAXMANAPOINTSPERCENT = 32,
		CONDITIONPARAM_STAT_SOULPOINTSPERCENT = 33,
		CONDITIONPARAM_STAT_MAGICPOINTSPERCENT = 34,
		CONDITIONPARAM_PERIODICDAMAGE = 35,
		CONDITIONPARAM_SKILL_MELEEPERCENT = 36,
		CONDITIONPARAM_SKILL_FISTPERCENT = 37,
		CONDITIONPARAM_SKILL_CLUBPERCENT = 38,
		CONDITIONPARAM_SKILL_SWORDPERCENT = 39,
		CONDITIONPARAM_SKILL_AXEPERCENT = 40,
		CONDITIONPARAM_SKILL_DISTANCEPERCENT = 41,
		CONDITIONPARAM_SKILL_SHIELDPERCENT = 42,
		CONDITIONPARAM_SKILL_FISHINGPERCENT = 43,
		CONDITIONPARAM_BUFF_SPELL = 44,
		CONDITIONPARAM_SUBID = 45,
	}; // end enum
} // end namespace

typedef Enum<enums::ConditionParam, enums::CONDITIONPARAM_SUBID + 1> ConditionParam;

typedef Enum<enums::ConditionParam, enums::CONDITIONPARAM_SUBID + 1> ConditionParam__Base;

//begin enum definitions
	const ConditionParam CONDITIONPARAM_OWNER(enums::CONDITIONPARAM_OWNER);
	const ConditionParam CONDITIONPARAM_TICKS(enums::CONDITIONPARAM_TICKS);
	const ConditionParam CONDITIONPARAM_OUTFIT(enums::CONDITIONPARAM_OUTFIT);
	const ConditionParam CONDITIONPARAM_HEALTHGAIN(enums::CONDITIONPARAM_HEALTHGAIN);
	const ConditionParam CONDITIONPARAM_HEALTHTICKS(enums::CONDITIONPARAM_HEALTHTICKS);
	const ConditionParam CONDITIONPARAM_MANAGAIN(enums::CONDITIONPARAM_MANAGAIN);
	const ConditionParam CONDITIONPARAM_MANATICKS(enums::CONDITIONPARAM_MANATICKS);
	const ConditionParam CONDITIONPARAM_DELAYED(enums::CONDITIONPARAM_DELAYED);
	const ConditionParam CONDITIONPARAM_SPEED(enums::CONDITIONPARAM_SPEED);
	const ConditionParam CONDITIONPARAM_LIGHT_LEVEL(enums::CONDITIONPARAM_LIGHT_LEVEL);
	const ConditionParam CONDITIONPARAM_LIGHT_COLOR(enums::CONDITIONPARAM_LIGHT_COLOR);
	const ConditionParam CONDITIONPARAM_SOULGAIN(enums::CONDITIONPARAM_SOULGAIN);
	const ConditionParam CONDITIONPARAM_SOULTICKS(enums::CONDITIONPARAM_SOULTICKS);
	const ConditionParam CONDITIONPARAM_MINVALUE(enums::CONDITIONPARAM_MINVALUE);
	const ConditionParam CONDITIONPARAM_MAXVALUE(enums::CONDITIONPARAM_MAXVALUE);
	const ConditionParam CONDITIONPARAM_STARTVALUE(enums::CONDITIONPARAM_STARTVALUE);
	const ConditionParam CONDITIONPARAM_TICKINTERVAL(enums::CONDITIONPARAM_TICKINTERVAL);
	const ConditionParam CONDITIONPARAM_FORCEUPDATE(enums::CONDITIONPARAM_FORCEUPDATE);
	const ConditionParam CONDITIONPARAM_SKILL_MELEE(enums::CONDITIONPARAM_SKILL_MELEE);
	const ConditionParam CONDITIONPARAM_SKILL_FIST(enums::CONDITIONPARAM_SKILL_FIST);
	const ConditionParam CONDITIONPARAM_SKILL_CLUB(enums::CONDITIONPARAM_SKILL_CLUB);
	const ConditionParam CONDITIONPARAM_SKILL_SWORD(enums::CONDITIONPARAM_SKILL_SWORD);
	const ConditionParam CONDITIONPARAM_SKILL_AXE(enums::CONDITIONPARAM_SKILL_AXE);
	const ConditionParam CONDITIONPARAM_SKILL_DISTANCE(enums::CONDITIONPARAM_SKILL_DISTANCE);
	const ConditionParam CONDITIONPARAM_SKILL_SHIELD(enums::CONDITIONPARAM_SKILL_SHIELD);
	const ConditionParam CONDITIONPARAM_SKILL_FISHING(enums::CONDITIONPARAM_SKILL_FISHING);
	const ConditionParam CONDITIONPARAM_STAT_MAXHITPOINTS(enums::CONDITIONPARAM_STAT_MAXHITPOINTS);
	const ConditionParam CONDITIONPARAM_STAT_MAXMANAPOINTS(enums::CONDITIONPARAM_STAT_MAXMANAPOINTS);
	const ConditionParam CONDITIONPARAM_STAT_SOULPOINTS(enums::CONDITIONPARAM_STAT_SOULPOINTS);
	const ConditionParam CONDITIONPARAM_STAT_MAGICPOINTS(enums::CONDITIONPARAM_STAT_MAGICPOINTS);
	const ConditionParam CONDITIONPARAM_STAT_MAXHITPOINTSPERCENT(enums::CONDITIONPARAM_STAT_MAXHITPOINTSPERCENT);
	const ConditionParam CONDITIONPARAM_STAT_MAXMANAPOINTSPERCENT(enums::CONDITIONPARAM_STAT_MAXMANAPOINTSPERCENT);
	const ConditionParam CONDITIONPARAM_STAT_SOULPOINTSPERCENT(enums::CONDITIONPARAM_STAT_SOULPOINTSPERCENT);
	const ConditionParam CONDITIONPARAM_STAT_MAGICPOINTSPERCENT(enums::CONDITIONPARAM_STAT_MAGICPOINTSPERCENT);
	const ConditionParam CONDITIONPARAM_PERIODICDAMAGE(enums::CONDITIONPARAM_PERIODICDAMAGE);
	const ConditionParam CONDITIONPARAM_SKILL_MELEEPERCENT(enums::CONDITIONPARAM_SKILL_MELEEPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_FISTPERCENT(enums::CONDITIONPARAM_SKILL_FISTPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_CLUBPERCENT(enums::CONDITIONPARAM_SKILL_CLUBPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_SWORDPERCENT(enums::CONDITIONPARAM_SKILL_SWORDPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_AXEPERCENT(enums::CONDITIONPARAM_SKILL_AXEPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_DISTANCEPERCENT(enums::CONDITIONPARAM_SKILL_DISTANCEPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_SHIELDPERCENT(enums::CONDITIONPARAM_SKILL_SHIELDPERCENT);
	const ConditionParam CONDITIONPARAM_SKILL_FISHINGPERCENT(enums::CONDITIONPARAM_SKILL_FISHINGPERCENT);
	const ConditionParam CONDITIONPARAM_BUFF_SPELL(enums::CONDITIONPARAM_BUFF_SPELL);
	const ConditionParam CONDITIONPARAM_SUBID(enums::CONDITIONPARAM_SUBID);
//end enum definitions

namespace enums {
	enum BlockType {
		BLOCK_NONE,
		BLOCK_DEFENSE,
		BLOCK_ARMOR,
		BLOCK_IMMUNITY,
	}; // end enum
} // end namespace

typedef Enum<enums::BlockType, enums::BLOCK_IMMUNITY + 1> BlockType;

typedef Enum<enums::BlockType, enums::BLOCK_IMMUNITY + 1> BlockType__Base;

//begin enum definitions
	const BlockType BLOCK_NONE(enums::BLOCK_NONE);
	const BlockType BLOCK_DEFENSE(enums::BLOCK_DEFENSE);
	const BlockType BLOCK_ARMOR(enums::BLOCK_ARMOR);
	const BlockType BLOCK_IMMUNITY(enums::BLOCK_IMMUNITY);
//end enum definitions

namespace enums {
	enum ViolationAction {
		ACTION_NOTATION = 0,
		ACTION_NAMEREPORT = 1,
		ACTION_BANISHMENT = 2,
		ACTION_BANREPORT = 3,
		ACTION_BANFINAL = 4,
		ACTION_BANREPORTFINAL = 5,
		ACTION_STATEMENT = 6,
		ACTION_DELETION = 7,
	}; // end enum
} // end namespace

typedef Enum<enums::ViolationAction, enums::ACTION_DELETION + 1> ViolationAction;

typedef Enum<enums::ViolationAction, enums::ACTION_DELETION + 1> ViolationAction__Base;

//begin enum definitions
	const ViolationAction ACTION_NOTATION(enums::ACTION_NOTATION);
	const ViolationAction ACTION_NAMEREPORT(enums::ACTION_NAMEREPORT);
	const ViolationAction ACTION_BANISHMENT(enums::ACTION_BANISHMENT);
	const ViolationAction ACTION_BANREPORT(enums::ACTION_BANREPORT);
	const ViolationAction ACTION_BANFINAL(enums::ACTION_BANFINAL);
	const ViolationAction ACTION_BANREPORTFINAL(enums::ACTION_BANREPORTFINAL);
	const ViolationAction ACTION_STATEMENT(enums::ACTION_STATEMENT);
	const ViolationAction ACTION_DELETION(enums::ACTION_DELETION);
//end enum definitions

namespace enums {
	enum SkillType {
		SKILL_FIST = 0,
		SKILL_CLUB = 1,
		SKILL_SWORD = 2,
		SKILL_AXE = 3,
		SKILL_DIST = 4,
		SKILL_SHIELD = 5,
		SKILL_FISH = 6,
	}; // end enum
} // end namespace

typedef Enum<enums::SkillType, enums::SKILL_FISH + 1> SkillType;

typedef Enum<enums::SkillType, enums::SKILL_FISH + 1> SkillType__Base;

//begin enum definitions
	const SkillType SKILL_FIST(enums::SKILL_FIST);
	const SkillType SKILL_CLUB(enums::SKILL_CLUB);
	const SkillType SKILL_SWORD(enums::SKILL_SWORD);
	const SkillType SKILL_AXE(enums::SKILL_AXE);
	const SkillType SKILL_DIST(enums::SKILL_DIST);
	const SkillType SKILL_SHIELD(enums::SKILL_SHIELD);
	const SkillType SKILL_FISH(enums::SKILL_FISH);
//end enum definitions

namespace enums {
	enum LevelType {
		LEVEL_FIST = SKILL_FIST,
		LEVEL_CLUB = SKILL_CLUB,
		LEVEL_SWORD = SKILL_SWORD,
		LEVEL_AXE = SKILL_AXE,
		LEVEL_DIST = SKILL_DIST,
		LEVEL_SHIELD = SKILL_SHIELD,
		LEVEL_FISH = SKILL_FISH,
		LEVEL_MAGIC = 7,
		LEVEL_EXPERIENCE = 8,
	}; // end enum
} // end namespace

typedef Enum<enums::LevelType, enums::LEVEL_EXPERIENCE + 1> LevelType;

typedef Enum<enums::LevelType, enums::LEVEL_EXPERIENCE + 1> LevelType__Base;

//begin enum definitions
	const LevelType LEVEL_FIST(enums::LEVEL_FIST);
	const LevelType LEVEL_CLUB(enums::LEVEL_CLUB);
	const LevelType LEVEL_SWORD(enums::LEVEL_SWORD);
	const LevelType LEVEL_AXE(enums::LEVEL_AXE);
	const LevelType LEVEL_DIST(enums::LEVEL_DIST);
	const LevelType LEVEL_SHIELD(enums::LEVEL_SHIELD);
	const LevelType LEVEL_FISH(enums::LEVEL_FISH);
	const LevelType LEVEL_MAGIC(enums::LEVEL_MAGIC);
	const LevelType LEVEL_EXPERIENCE(enums::LEVEL_EXPERIENCE);
//end enum definitions

namespace enums {
	enum PlayerStatType {
		STAT_MAXHITPOINTS,
		STAT_MAXMANAPOINTS,
		STAT_SOULPOINTS,
		STAT_MAGICPOINTS,
	}; // end enum
} // end namespace

typedef Enum<enums::PlayerStatType, enums::STAT_MAGICPOINTS + 1> PlayerStatType;

typedef Enum<enums::PlayerStatType, enums::STAT_MAGICPOINTS + 1> PlayerStatType__Base;

//begin enum definitions
	const PlayerStatType STAT_MAXHITPOINTS(enums::STAT_MAXHITPOINTS);
	const PlayerStatType STAT_MAXMANAPOINTS(enums::STAT_MAXMANAPOINTS);
	const PlayerStatType STAT_SOULPOINTS(enums::STAT_SOULPOINTS);
	const PlayerStatType STAT_MAGICPOINTS(enums::STAT_MAGICPOINTS);
//end enum definitions

namespace enums {
	enum LossType {
		LOSS_EXPERIENCE = 0,
		LOSS_MANASPENT = 1,
		LOSS_SKILLTRIES = 2,
		LOSS_ITEMS = 3,
		LOSS_CONTAINERS = 4,
	}; // end enum
} // end namespace

typedef Enum<enums::LossType, enums::LOSS_CONTAINERS + 1> LossType;

typedef Enum<enums::LossType, enums::LOSS_CONTAINERS + 1> LossType__Base;

//begin enum definitions
	const LossType LOSS_EXPERIENCE(enums::LOSS_EXPERIENCE);
	const LossType LOSS_MANASPENT(enums::LOSS_MANASPENT);
	const LossType LOSS_SKILLTRIES(enums::LOSS_SKILLTRIES);
	const LossType LOSS_ITEMS(enums::LOSS_ITEMS);
	const LossType LOSS_CONTAINERS(enums::LOSS_CONTAINERS);
//end enum definitions

namespace enums {
	enum FormulaType {
		FORMULA_UNDEFINED = 0,
		FORMULA_LEVELMAGIC = 1,
		FORMULA_SKILL = 2,
		FORMULA_VALUE = 3,
	}; // end enum
} // end namespace

typedef Enum<enums::FormulaType, enums::FORMULA_VALUE + 1> FormulaType;

typedef Enum<enums::FormulaType, enums::FORMULA_VALUE + 1> FormulaType__Base;

//begin enum definitions
	const FormulaType FORMULA_UNDEFINED(enums::FORMULA_UNDEFINED);
	const FormulaType FORMULA_LEVELMAGIC(enums::FORMULA_LEVELMAGIC);
	const FormulaType FORMULA_SKILL(enums::FORMULA_SKILL);
	const FormulaType FORMULA_VALUE(enums::FORMULA_VALUE);
//end enum definitions

namespace enums {
	enum ConditionID {
		CONDITIONID_DEFAULT = -1,
		CONDITIONID_COMBAT = 0,
		CONDITIONID_HEAD = 1,
		CONDITIONID_NECKLACE = 2,
		CONDITIONID_BACKPACK = 3,
		CONDITIONID_ARMOR = 4,
		CONDITIONID_RIGHT = 5,
		CONDITIONID_LEFT = 6,
		CONDITIONID_LEGS = 7,
		CONDITIONID_FEET = 8,
		CONDITIONID_RING = 9,
		CONDITIONID_AMMO = 10,
	}; // end enum
} // end namespace

typedef Enum<enums::ConditionID, enums::CONDITIONID_AMMO + 1> ConditionID;

typedef Enum<enums::ConditionID, enums::CONDITIONID_AMMO + 1> ConditionID__Base;

//begin enum definitions
	const ConditionID CONDITIONID_DEFAULT(enums::CONDITIONID_DEFAULT);
	const ConditionID CONDITIONID_COMBAT(enums::CONDITIONID_COMBAT);
	const ConditionID CONDITIONID_HEAD(enums::CONDITIONID_HEAD);
	const ConditionID CONDITIONID_NECKLACE(enums::CONDITIONID_NECKLACE);
	const ConditionID CONDITIONID_BACKPACK(enums::CONDITIONID_BACKPACK);
	const ConditionID CONDITIONID_ARMOR(enums::CONDITIONID_ARMOR);
	const ConditionID CONDITIONID_RIGHT(enums::CONDITIONID_RIGHT);
	const ConditionID CONDITIONID_LEFT(enums::CONDITIONID_LEFT);
	const ConditionID CONDITIONID_LEGS(enums::CONDITIONID_LEGS);
	const ConditionID CONDITIONID_FEET(enums::CONDITIONID_FEET);
	const ConditionID CONDITIONID_RING(enums::CONDITIONID_RING);
	const ConditionID CONDITIONID_AMMO(enums::CONDITIONID_AMMO);
//end enum definitions

namespace enums {
	enum PlayerSex {
		SEX_FEMALE = 0,
		SEX_MALE = 1,
		SEX_FEMALE_GAMEMASTER = 2,
		SEX_MALE_GAMEMASTER = 3,
		SEX_FEMALE_MANAGER = 4,
		SEX_MALE_MANAGER = 5,
		SEX_FEMALE_GOD = 6,
		SEX_MALE_GOD = 7,
	}; // end enum
} // end namespace

typedef Enum<enums::PlayerSex, enums::SEX_MALE_GOD + 1> PlayerSex;

typedef Enum<enums::PlayerSex, enums::SEX_MALE_GOD + 1> PlayerSex__Base;

//begin enum definitions
	const PlayerSex SEX_FEMALE(enums::SEX_FEMALE);
	const PlayerSex SEX_MALE(enums::SEX_MALE);
	const PlayerSex SEX_FEMALE_GAMEMASTER(enums::SEX_FEMALE_GAMEMASTER);
	const PlayerSex SEX_MALE_GAMEMASTER(enums::SEX_MALE_GAMEMASTER);
	const PlayerSex SEX_FEMALE_MANAGER(enums::SEX_FEMALE_MANAGER);
	const PlayerSex SEX_MALE_MANAGER(enums::SEX_MALE_MANAGER);
	const PlayerSex SEX_FEMALE_GOD(enums::SEX_FEMALE_GOD);
	const PlayerSex SEX_MALE_GOD(enums::SEX_MALE_GOD);
//end enum definitions

namespace enums {
	enum ChaseMode {
		CHASEMODE_STANDSTILL,
		CHASEMODE_FOLLOW,
	}; // end enum
} // end namespace

typedef Enum<enums::ChaseMode, enums::CHASEMODE_FOLLOW + 1> ChaseMode;

typedef Enum<enums::ChaseMode, enums::CHASEMODE_FOLLOW + 1> ChaseMode__Base;

//begin enum definitions
	const ChaseMode CHASEMODE_STANDSTILL(enums::CHASEMODE_STANDSTILL);
	const ChaseMode CHASEMODE_FOLLOW(enums::CHASEMODE_FOLLOW);
//end enum definitions

namespace enums {
	enum FightMode {
		FIGHTMODE_ATTACK,
		FIGHTMODE_BALANCED,
		FIGHTMODE_DEFENSE,
	}; // end enum
} // end namespace

typedef Enum<enums::FightMode, enums::FIGHTMODE_DEFENSE + 1> FightMode;

typedef Enum<enums::FightMode, enums::FIGHTMODE_DEFENSE + 1> FightMode__Base;

//begin enum definitions
	const FightMode FIGHTMODE_ATTACK(enums::FIGHTMODE_ATTACK);
	const FightMode FIGHTMODE_BALANCED(enums::FIGHTMODE_BALANCED);
	const FightMode FIGHTMODE_DEFENSE(enums::FIGHTMODE_DEFENSE);
//end enum definitions

namespace enums {
	enum TradeState {
		TRADE_NONE,
		TRADE_INITIATED,
		TRADE_ACCEPT,
		TRADE_ACKNOWLEDGE,
		TRADE_TRANSFER,
	}; // end enum
} // end namespace

typedef Enum<enums::TradeState, enums::TRADE_TRANSFER + 1> TradeState;

typedef Enum<enums::TradeState, enums::TRADE_TRANSFER + 1> TradeState__Base;

//begin enum definitions
	const TradeState TRADE_NONE(enums::TRADE_NONE);
	const TradeState TRADE_INITIATED(enums::TRADE_INITIATED);
	const TradeState TRADE_ACCEPT(enums::TRADE_ACCEPT);
	const TradeState TRADE_ACKNOWLEDGE(enums::TRADE_ACKNOWLEDGE);
	const TradeState TRADE_TRANSFER(enums::TRADE_TRANSFER);
//end enum definitions

namespace enums {
	enum SlotType {
		SLOT_WHEREEVER = 0,
		SLOT_HEAD = 1,
		SLOT_NECKLACE = 2,
		SLOT_BACKPACK = 3,
		SLOT_ARMOR = 4,
		SLOT_RIGHT = 5,
		SLOT_LEFT = 6,
		SLOT_LEGS = 7,
		SLOT_FEET = 8,
		SLOT_RING = 9,
		SLOT_AMMO = 10,
		SLOT_HAND = 11,
		SLOT_TWO_HAND = SLOT_HAND,
		SLOT_FIRST = SLOT_HEAD,
		SLOT_LAST = SLOT_HAND,
	}; // end enum
} // end namespace

typedef Enum<enums::SlotType, enums::SLOT_LAST + 1> SlotType;

typedef Enum<enums::SlotType, enums::SLOT_LAST + 1> SlotType__Base;

//begin enum definitions
	const SlotType SLOT_WHEREEVER(enums::SLOT_WHEREEVER);
	const SlotType SLOT_HEAD(enums::SLOT_HEAD);
	const SlotType SLOT_NECKLACE(enums::SLOT_NECKLACE);
	const SlotType SLOT_BACKPACK(enums::SLOT_BACKPACK);
	const SlotType SLOT_ARMOR(enums::SLOT_ARMOR);
	const SlotType SLOT_RIGHT(enums::SLOT_RIGHT);
	const SlotType SLOT_LEFT(enums::SLOT_LEFT);
	const SlotType SLOT_LEGS(enums::SLOT_LEGS);
	const SlotType SLOT_FEET(enums::SLOT_FEET);
	const SlotType SLOT_RING(enums::SLOT_RING);
	const SlotType SLOT_AMMO(enums::SLOT_AMMO);
	const SlotType SLOT_HAND(enums::SLOT_HAND);
	const SlotType SLOT_TWO_HAND(enums::SLOT_TWO_HAND);
	const SlotType SLOT_FIRST(enums::SLOT_FIRST);
	const SlotType SLOT_LAST(enums::SLOT_LAST);
//end enum definitions

namespace enums {
	enum SlotPosition {
		SLOTPOSITION_NONE,
		SLOTPOSITION_HEAD = 1,
		SLOTPOSITION_NECKLACE = 2,
		SLOTPOSITION_BACKPACK = 4,
		SLOTPOSITION_ARMOR = 8,
		SLOTPOSITION_RIGHT = 16,
		SLOTPOSITION_LEFT = 32,
		SLOTPOSITION_LEGS = 64,
		SLOTPOSITION_FEET = 128,
		SLOTPOSITION_RING = 256,
		SLOTPOSITION_AMMO = 512,
		SLOTPOSITION_DEPOT = 1024,
		SLOTPOSITION_TWO_HAND = 2048,
		SLOTPOSITION_HAND = SLOTPOSITION_LEFT | SLOTPOSITION_RIGHT,
		SLOTPOSITION_WHEREEVER,
	}; // end enum
} // end namespace

typedef BitEnum<enums::SlotPosition, -1> SlotPosition;

typedef Enum<enums::SlotPosition, -1> SlotPosition__Base;

//begin enum definitions
	const SlotPosition SLOTPOSITION_NONE(enums::SLOTPOSITION_NONE);
	const SlotPosition SLOTPOSITION_HEAD(enums::SLOTPOSITION_HEAD);
	const SlotPosition SLOTPOSITION_NECKLACE(enums::SLOTPOSITION_NECKLACE);
	const SlotPosition SLOTPOSITION_BACKPACK(enums::SLOTPOSITION_BACKPACK);
	const SlotPosition SLOTPOSITION_ARMOR(enums::SLOTPOSITION_ARMOR);
	const SlotPosition SLOTPOSITION_RIGHT(enums::SLOTPOSITION_RIGHT);
	const SlotPosition SLOTPOSITION_LEFT(enums::SLOTPOSITION_LEFT);
	const SlotPosition SLOTPOSITION_LEGS(enums::SLOTPOSITION_LEGS);
	const SlotPosition SLOTPOSITION_FEET(enums::SLOTPOSITION_FEET);
	const SlotPosition SLOTPOSITION_RING(enums::SLOTPOSITION_RING);
	const SlotPosition SLOTPOSITION_AMMO(enums::SLOTPOSITION_AMMO);
	const SlotPosition SLOTPOSITION_DEPOT(enums::SLOTPOSITION_DEPOT);
	const SlotPosition SLOTPOSITION_TWO_HAND(enums::SLOTPOSITION_TWO_HAND);
	const SlotPosition SLOTPOSITION_HAND(enums::SLOTPOSITION_HAND);
	const SlotPosition SLOTPOSITION_WHEREEVER(enums::SLOTPOSITION_WHEREEVER);
//end enum definitions

namespace enums {
	enum ZoneType {
		ZONE_PROTECTION,
		ZONE_NOPVP,
		ZONE_PVP,
		ZONE_NOLOGOUT,
		ZONE_NORMAL,
	}; // end enum
} // end namespace

typedef Enum<enums::ZoneType, enums::ZONE_NORMAL + 1> ZoneType;

typedef Enum<enums::ZoneType, enums::ZONE_NORMAL + 1> ZoneType__Base;

//begin enum definitions
	const ZoneType ZONE_PROTECTION(enums::ZONE_PROTECTION);
	const ZoneType ZONE_NOPVP(enums::ZONE_NOPVP);
	const ZoneType ZONE_PVP(enums::ZONE_PVP);
	const ZoneType ZONE_NOLOGOUT(enums::ZONE_NOLOGOUT);
	const ZoneType ZONE_NORMAL(enums::ZONE_NORMAL);
//end enum definitions

namespace Script {
namespace enums {
	enum ListenerType {
		ON_SAY_LISTENER,
		ON_USE_ITEM_LISTENER,
		ON_EQUIP_ITEM_LISTENER,
		ON_MOVE_CREATURE_LISTENER,
		ON_MOVE_ITEM_LISTENER,
		ON_OPEN_CHANNEL_LISTENER,
		ON_CLOSE_CHANNEL_LISTENER,
		ON_LOGIN_LISTENER,
		ON_LOGOUT_LISTENER,
		ON_LOOK_LISTENER,
		ON_TURN_LISTENER,
		ON_LOAD_LISTENER,
		ON_UNLOAD_LISTENER,
		ON_SPAWN_LISTENER,
		ON_KILL_LISTENER,
		ON_DIE_LISTENER,
		ON_ADVANCE_LISTENER,
		ON_THINK_LISTENER,
		ON_HEAR_LISTENER,
		ON_SPOT_CREATURE_LISTENER,
		ON_LOSE_CREATURE_LISTENER,
	}; // end enum
} // end namespace

typedef Enum<Script::enums::ListenerType, Script::enums::ON_LOSE_CREATURE_LISTENER + 1> ListenerType;

typedef Enum<Script::enums::ListenerType, Script::enums::ON_LOSE_CREATURE_LISTENER + 1> ListenerType__Base;

//begin enum definitions
	const ListenerType ON_SAY_LISTENER(enums::ON_SAY_LISTENER);
	const ListenerType ON_USE_ITEM_LISTENER(enums::ON_USE_ITEM_LISTENER);
	const ListenerType ON_EQUIP_ITEM_LISTENER(enums::ON_EQUIP_ITEM_LISTENER);
	const ListenerType ON_MOVE_CREATURE_LISTENER(enums::ON_MOVE_CREATURE_LISTENER);
	const ListenerType ON_MOVE_ITEM_LISTENER(enums::ON_MOVE_ITEM_LISTENER);
	const ListenerType ON_OPEN_CHANNEL_LISTENER(enums::ON_OPEN_CHANNEL_LISTENER);
	const ListenerType ON_CLOSE_CHANNEL_LISTENER(enums::ON_CLOSE_CHANNEL_LISTENER);
	const ListenerType ON_LOGIN_LISTENER(enums::ON_LOGIN_LISTENER);
	const ListenerType ON_LOGOUT_LISTENER(enums::ON_LOGOUT_LISTENER);
	const ListenerType ON_LOOK_LISTENER(enums::ON_LOOK_LISTENER);
	const ListenerType ON_TURN_LISTENER(enums::ON_TURN_LISTENER);
	const ListenerType ON_LOAD_LISTENER(enums::ON_LOAD_LISTENER);
	const ListenerType ON_UNLOAD_LISTENER(enums::ON_UNLOAD_LISTENER);
	const ListenerType ON_SPAWN_LISTENER(enums::ON_SPAWN_LISTENER);
	const ListenerType ON_KILL_LISTENER(enums::ON_KILL_LISTENER);
	const ListenerType ON_DIE_LISTENER(enums::ON_DIE_LISTENER);
	const ListenerType ON_ADVANCE_LISTENER(enums::ON_ADVANCE_LISTENER);
	const ListenerType ON_THINK_LISTENER(enums::ON_THINK_LISTENER);
	const ListenerType ON_HEAR_LISTENER(enums::ON_HEAR_LISTENER);
	const ListenerType ON_SPOT_CREATURE_LISTENER(enums::ON_SPOT_CREATURE_LISTENER);
	const ListenerType ON_LOSE_CREATURE_LISTENER(enums::ON_LOSE_CREATURE_LISTENER);
//end enum definitions

} // end namespace Script

#endif
