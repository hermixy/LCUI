/* ***************************************************************************
 * LCUI_Label.hpp -- C++ class and function for Label widget 
 * 
 * Copyright (C) 2012 by
 * Liu Chao
 * 
 * This file is part of the LCUI project, and may only be used, modified, and
 * distributed under the terms of the GPLv2.
 * 
 * (GPLv2 is abbreviation of GNU General Public License Version 2)
 * 
 * By continuing to use, modify, or distribute this file you indicate that you
 * have read the license and understand and accept it fully.
 *  
 * The LCUI project is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GPL v2 for more details.
 * 
 * You should have received a copy of the GPLv2 along with this file. It is 
 * usually in the LICENSE.TXT file, If not, see <http://www.gnu.org/licenses/>.
 * ****************************************************************************/
 
/* ****************************************************************************
 * LCUI_Label.h -- �ı���ǩ(label)������C++��ͺ���
 *
 * ��Ȩ���� (C) 2012 ������ 
 * ����
 * 
 * ����ļ���LCUI��Ŀ��һ���֣�����ֻ���Ը���GPLv2����Э����ʹ�á����ĺͷ�����
 *
 * (GPLv2 �� GNUͨ�ù�������֤�ڶ��� ��Ӣ����д)
 * 
 * ����ʹ�á��޸Ļ򷢲����ļ����������Ѿ��Ķ�����ȫ����ͽ����������Э�顣
 * 
 * LCUI ��Ŀ�ǻ���ʹ��Ŀ�Ķ�����ɢ���ģ��������κε������Σ�����û�������Ի���
 * ����;���������������������GPLv2����Э�顣
 *
 * ��Ӧ���յ������ڱ��ļ���GPLv2����Э��ĸ�������ͨ����LICENSE.TXT�ļ��У����
 * û�У���鿴��<http://www.gnu.org/licenses/>. 
 * ****************************************************************************/

#ifndef __LCUI_LABEL_HPP__
#define __LCUI_LABEL_HPP__

class LCUILabel:public LCUIWidget
{
public:
	LCUILabel():LCUIWidget( "label" ){};
	void setText( const char* );
	void setTextStyle( LCUI_TextStyle );
};

void LCUILabel::setText( const char *text )
{
	Label_Text( getWidget(), text );
}

void LCUILabel::setTextStyle( LCUI_TextStyle style )
{
	Label_TextStyle( getWidget(), style );
}

#endif