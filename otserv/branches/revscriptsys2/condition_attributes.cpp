
// This file has been automatically generated by a script.
// Do not make changes to this file manually, as they will be discarded
// as soon as the project is recompiled

#include "otpch.h"
#include "condition_attributes.h"

template<> bool ConditionId__Base::initialized = false;
template<> std::string ConditionId__Base::enum_name = "ConditionId";
template<> ConditionId__Base::EnumToString ConditionId__Base::enum_to_string = ConditionId__Base::EnumToString();
template<> ConditionId__Base::StringToEnum ConditionId__Base::string_to_enum = ConditionId__Base::StringToEnum();
template<> ConditionId__Base::StringToEnum ConditionId__Base::lstring_to_enum= ConditionId__Base::StringToEnum();
template<> void ConditionId__Base::initialize()
{
	initAddValue(enums::CONDITION_POISONED, "CONDITION_POISONED", true);
	initAddValue(enums::CONDITION_POISONED, "poisoned", false);
	initAddValue(enums::CONDITION_BURNING, "CONDITION_BURNING", true);
	initAddValue(enums::CONDITION_BURNING, "burning", false);
	initAddValue(enums::CONDITION_ELECTRIFIED, "CONDITION_ELECTRIFIED", true);
	initAddValue(enums::CONDITION_ELECTRIFIED, "electrified", false);
	initAddValue(enums::CONDITION_DROWNING, "CONDITION_DROWNING", true);
	initAddValue(enums::CONDITION_DROWNING, "drowning", false);
	initAddValue(enums::CONDITION_FREEZING, "CONDITION_FREEZING", true);
	initAddValue(enums::CONDITION_FREEZING, "freezing", false);
	initAddValue(enums::CONDITION_DAZZLED, "CONDITION_DAZZLED", true);
	initAddValue(enums::CONDITION_DAZZLED, "dazzled", false);
	initAddValue(enums::CONDITION_CURSED, "CONDITION_CURSED", true);
	initAddValue(enums::CONDITION_CURSED, "cursed", false);
	initAddValue(enums::CONDITION_PARALYZED, "CONDITION_PARALYZED", true);
	initAddValue(enums::CONDITION_PARALYZED, "paralyzed", false);
	initAddValue(enums::CONDITION_INVISIBLE, "CONDITION_INVISIBLE", true);
	initAddValue(enums::CONDITION_INVISIBLE, "invisible", false);
	initAddValue(enums::CONDITION_DRUNK, "CONDITION_DRUNK", true);
	initAddValue(enums::CONDITION_DRUNK, "drunk", false);
	initAddValue(enums::CONDITION_HASTE, "CONDITION_HASTE", true);
	initAddValue(enums::CONDITION_HASTE, "haste", false);
	initAddValue(enums::CONDITION_INFIGHT, "CONDITION_INFIGHT", true);
	initAddValue(enums::CONDITION_INFIGHT, "infight", false);
	initAddValue(enums::CONDITION_SHAPESHIFT, "CONDITION_SHAPESHIFT", true);
	initAddValue(enums::CONDITION_SHAPESHIFT, "shapeshift", false);
	initAddValue(enums::CONDITION_MANASHIELD, "CONDITION_MANASHIELD", true);
	initAddValue(enums::CONDITION_MANASHIELD, "manashield", false);
	initAddValue(enums::CONDITION_PACIFIED, "CONDITION_PACIFIED", true);
	initAddValue(enums::CONDITION_PACIFIED, "pacified", false);
	initAddValue(enums::CONDITION_DISARMED, "CONDITION_DISARMED", true);
	initAddValue(enums::CONDITION_DISARMED, "disarmed", false);
	initAddValue(enums::CONDITION_SILENCED, "CONDITION_SILENCED", true);
	initAddValue(enums::CONDITION_SILENCED, "silenced", false);
	initAddValue(enums::CONDITION_LIGHT, "CONDITION_LIGHT", true);
	initAddValue(enums::CONDITION_LIGHT, "light", false);
	initAddValue(enums::CONDITION_REGENERATION, "CONDITION_REGENERATION", true);
	initAddValue(enums::CONDITION_REGENERATION, "regeneration", false);
	initAddValue(enums::CONDITION_REGENSOUL, "CONDITION_REGENSOUL", true);
	initAddValue(enums::CONDITION_REGENSOUL, "regensoul", false);
	initAddValue(enums::CONDITION_MUTED_CHAT, "CONDITION_MUTED_CHAT", true);
	initAddValue(enums::CONDITION_MUTED_CHAT, "muted_chat", false);
	initAddValue(enums::CONDITION_MUTED_CHAT_TRADE, "CONDITION_MUTED_CHAT_TRADE", true);
	initAddValue(enums::CONDITION_MUTED_CHAT_TRADE, "muted_chat_trade", false);
	initAddValue(enums::CONDITION_EXHAUST_DAMAGE, "CONDITION_EXHAUST_DAMAGE", true);
	initAddValue(enums::CONDITION_EXHAUST_DAMAGE, "exhaust_damage", false);
	initAddValue(enums::CONDITION_EXHAUST_HEAL, "CONDITION_EXHAUST_HEAL", true);
	initAddValue(enums::CONDITION_EXHAUST_HEAL, "exhaust_heal", false);
	initAddValue(enums::CONDITION_EXHAUST_YELL, "CONDITION_EXHAUST_YELL", true);
	initAddValue(enums::CONDITION_EXHAUST_YELL, "exhaust_yell", false);
	initAddValue(enums::CONDITION_HUNTING, "CONDITION_HUNTING", true);
	initAddValue(enums::CONDITION_HUNTING, "hunting", false);
}

template<> bool ConditionAttribute__Base::initialized = false;
template<> std::string ConditionAttribute__Base::enum_name = "ConditionAttribute";
template<> ConditionAttribute__Base::EnumToString ConditionAttribute__Base::enum_to_string = ConditionAttribute__Base::EnumToString();
template<> ConditionAttribute__Base::StringToEnum ConditionAttribute__Base::string_to_enum = ConditionAttribute__Base::StringToEnum();
template<> ConditionAttribute__Base::StringToEnum ConditionAttribute__Base::lstring_to_enum= ConditionAttribute__Base::StringToEnum();
template<> void ConditionAttribute__Base::initialize()
{
	initAddValue(enums::CONDITIONATTRIBUTE_MECHANIC, "CONDITIONATTRIBUTE_MECHANIC", true);
	initAddValue(enums::CONDITIONATTRIBUTE_COMBAT, "CONDITIONATTRIBUTE_COMBAT", true);
	initAddValue(enums::CONDITIONATTRIBUTE_SOURCE, "CONDITIONATTRIBUTE_SOURCE", true);
	initAddValue(enums::CONDITIONATTRIBUTE_TICKS, "CONDITIONATTRIBUTE_TICKS", true);
	initAddValue(enums::CONDITIONATTRIBUTE_NAME, "CONDITIONATTRIBUTE_NAME", true);
	initAddValue(enums::CONDITIONATTRIBUTE_FLAGS, "CONDITIONATTRIBUTE_FLAGS", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_TYPE, "CONDITIONATTRIBUTE_EFFECT_TYPE", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODTYPE, "CONDITIONATTRIBUTE_EFFECT_MODTYPE", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODVALUE, "CONDITIONATTRIBUTE_EFFECT_MODVALUE", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODTOTAL, "CONDITIONATTRIBUTE_EFFECT_MODTOTAL", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODPERCENT, "CONDITIONATTRIBUTE_EFFECT_MODPERCENT", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODTICKS, "CONDITIONATTRIBUTE_EFFECT_MODTICKS", true);
	initAddValue(enums::CONDITIONATTRIBUTE_EFFECT_MODPOD, "CONDITIONATTRIBUTE_EFFECT_MODPOD", true);
	initAddValue(enums::CONDITIONATTR_END, "CONDITIONATTR_END", true);
}

template<> bool MechanicType__Base::initialized = false;
template<> std::string MechanicType__Base::enum_name = "MechanicType";
template<> MechanicType__Base::EnumToString MechanicType__Base::enum_to_string = MechanicType__Base::EnumToString();
template<> MechanicType__Base::StringToEnum MechanicType__Base::string_to_enum = MechanicType__Base::StringToEnum();
template<> MechanicType__Base::StringToEnum MechanicType__Base::lstring_to_enum= MechanicType__Base::StringToEnum();
template<> void MechanicType__Base::initialize()
{
	initAddValue(enums::MECHANIC_NONE, "MECHANIC_NONE", true);
	initAddValue(enums::MECHANIC_SHAPESHIFT, "MECHANIC_SHAPESHIFT", true);
	initAddValue(enums::MECHANIC_PACIFIED, "MECHANIC_PACIFIED", true);
	initAddValue(enums::MECHANIC_DISARMED, "MECHANIC_DISARMED", true);
	initAddValue(enums::MECHANIC_SHIELDED, "MECHANIC_SHIELDED", true);
	initAddValue(enums::MECHANIC_SILENCED, "MECHANIC_SILENCED", true);
	initAddValue(enums::MECHANIC_PARALYZED, "MECHANIC_PARALYZED", true);
	initAddValue(enums::MECHANIC_DRUNK, "MECHANIC_DRUNK", true);
	initAddValue(enums::MECHANIC_INVISIBLE, "MECHANIC_INVISIBLE", true);
}

template<> bool ConditionEnd__Base::initialized = false;
template<> std::string ConditionEnd__Base::enum_name = "ConditionEnd";
template<> ConditionEnd__Base::EnumToString ConditionEnd__Base::enum_to_string = ConditionEnd__Base::EnumToString();
template<> ConditionEnd__Base::StringToEnum ConditionEnd__Base::string_to_enum = ConditionEnd__Base::StringToEnum();
template<> ConditionEnd__Base::StringToEnum ConditionEnd__Base::lstring_to_enum= ConditionEnd__Base::StringToEnum();
template<> void ConditionEnd__Base::initialize()
{
	initAddValue(enums::CONDITIONEND_DURATION, "CONDITIONEND_DURATION", true);
	initAddValue(enums::CONDITIONEND_DEATH, "CONDITIONEND_DEATH", true);
	initAddValue(enums::CONDITIONEND_REMOVED, "CONDITIONEND_REMOVED", true);
	initAddValue(enums::CONDITIONEND_UPDATE, "CONDITIONEND_UPDATE", true);
	initAddValue(enums::CONDITIONEND_CLEANUP, "CONDITIONEND_CLEANUP", true);
}

