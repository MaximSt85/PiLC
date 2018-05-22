/*----- PROTECTED REGION ID(PiLC_PICOLASClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        PiLC_PICOLASClass.h
//
// description : Include for the PiLC_PICOLAS root class.
//               This class is the singleton class for
//                the PiLC_PICOLAS device class.
//               It contains all properties and methods which the 
//               PiLC_PICOLAS requires only once e.g. the commands.
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef PiLC_PICOLASClass_H
#define PiLC_PICOLASClass_H

#include <tango.h>
#include <PiLC_PICOLAS.h>


/*----- PROTECTED REGION END -----*/	//	PiLC_PICOLASClass.h


namespace PiLC_PICOLAS_ns
{
/*----- PROTECTED REGION ID(PiLC_PICOLASClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	PiLC_PICOLASClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute External_Trigger_Active class definition
class External_Trigger_ActiveAttrib: public Tango::Attr
{
public:
	External_Trigger_ActiveAttrib():Attr("External_Trigger_Active",
			Tango::DEV_SHORT, Tango::READ) {};
	~External_Trigger_ActiveAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->read_External_Trigger_Active(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_External_Trigger_Active_allowed(ty);}
};

//	Attribute Frequency_divider class definition
class Frequency_dividerAttrib: public Tango::Attr
{
public:
	Frequency_dividerAttrib():Attr("Frequency_divider",
			Tango::DEV_SHORT, Tango::WRITE) {};
	~Frequency_dividerAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->write_Frequency_divider(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_Frequency_divider_allowed(ty);}
};

//	Attribute Delay class definition
class DelayAttrib: public Tango::Attr
{
public:
	DelayAttrib():Attr("Delay",
			Tango::DEV_SHORT, Tango::WRITE) {};
	~DelayAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->write_Delay(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_Delay_allowed(ty);}
};

//	Attribute High_time class definition
class High_timeAttrib: public Tango::Attr
{
public:
	High_timeAttrib():Attr("High_time",
			Tango::DEV_LONG, Tango::WRITE) {};
	~High_timeAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->write_High_time(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_High_time_allowed(ty);}
};

//	Attribute Internal_Generator_Enable class definition
class Internal_Generator_EnableAttrib: public Tango::Attr
{
public:
	Internal_Generator_EnableAttrib():Attr("Internal_Generator_Enable",
			Tango::DEV_BOOLEAN, Tango::WRITE) {};
	~Internal_Generator_EnableAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->write_Internal_Generator_Enable(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_Internal_Generator_Enable_allowed(ty);}
};

//	Attribute Internal_frequency class definition
class Internal_frequencyAttrib: public Tango::Attr
{
public:
	Internal_frequencyAttrib():Attr("Internal_frequency",
			Tango::DEV_DOUBLE, Tango::WRITE) {};
	~Internal_frequencyAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PiLC_PICOLAS *>(dev))->write_Internal_frequency(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PiLC_PICOLAS *>(dev))->is_Internal_frequency_allowed(ty);}
};


/**
 *	The PiLC_PICOLASClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  PiLC_PICOLASClass : public Tango::DeviceClass
#else
class PiLC_PICOLASClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(PiLC_PICOLASClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	PiLC_PICOLASClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static PiLC_PICOLASClass *init(const char *);
		static PiLC_PICOLASClass *instance();
		~PiLC_PICOLASClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		PiLC_PICOLASClass(string &);
		static PiLC_PICOLASClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	PiLC_PICOLAS_H
