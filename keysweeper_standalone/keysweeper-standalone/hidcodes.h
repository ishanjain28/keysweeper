/* 
 * $Id$
 *
 * Microsoft keyboard specific Wireless Keyboard reverse HID tables
 *    XXX kind of buggy
 *
 * Authors/Copyright:
 *    2010, Thorsten Schroeder <ths@dreamlab.net>
 *
 * Revision: $Rev$
 *
 * Switzerland, Winterthur, 2009/04/25
 * Germany, Berlin, 2009/04/25
 *
 *   The contents of this file are subject to the Mozilla Public License
 *   Version 1.1 (the "License"); you may not use this file except in
 *   compliance with the License. You may obtain a copy of the License at
 *   http://www.mozilla.org/MPL/
 *
 *   Software distributed under the License is distributed on an "AS IS"
 *   basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 *   License for the specific language governing rights and limitations
 *   under the License.
 * 
 * */

#ifndef _HIDCODES_H
#define _HIDCODES_H

uint8_t reverse_HID[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //0
   0x2a, 0x00, 0x28, 0x00, 0x00, 0x28, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //31

   0x2c, 0x1e, 0x34, 0x20, 0x21, 0x22, 0x24, 0x34, //32
   0x26, 0x27, 0x25, 0x2e, 0x36, 0x2d, 0x37, 0x38, 
   0x27, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
   0x25, 0x26, 0x33, 0x33, 0x00, 0x2e, 0x37, 0x38, //63

   0x1f, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, //64
   0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 
   0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
   0x1b, 0x1c, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, //95
   
   0x00, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, //96
   0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 
   0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
   0x1b, 0x1c, 0x1d, 0x00, 0x31, 0x00, 0x00, 0x00, //127
   

   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


uint8_t HID_basic[][2] = {
   /*0x00=>*/{'_','_'},
   /*0x01=>*/{'_','_'},
   /*0x02=>*/{'_','_'},
   /*0x03=>*/{'_','_'},
   /*0x04=>*/{'a','A'},
   /*0x05=>*/{'b','B'},
   /*0x06=>*/{'c','C'},
   /*0x07=>*/{'d','D'},
   /*0x08=>*/{'e','E'},
   /*0x09=>*/{'f','F'},
   /*0x0A=>*/{'g','G'},
   /*0x0B=>*/{'h','H'},
   /*0x0C=>*/{'i','I'},
   /*0x0D=>*/{'j','J'},
   /*0x0E=>*/{'k','K'},
   /*0x0F=>*/{'l','L'},
   /*0x10=>*/{'m','M'},
   /*0x11=>*/{'n','N'},
   /*0x12=>*/{'o','O'},
   /*0x13=>*/{'p','P'},
   /*0x14=>*/{'q','Q'},
   /*0x15=>*/{'r','R'},
   /*0x16=>*/{'s','S'},
   /*0x17=>*/{'t','T'},
   /*0x18=>*/{'u','U'},
   /*0x19=>*/{'v','V'},
   /*0x1A=>*/{'w','W'},
   /*0x1B=>*/{'x','X'},
   /*0x1C=>*/{'y','Y'},
   /*0x1D=>*/{'z','Z'},
   /*0x1E=>*/{'1','!'},
   /*0x1F=>*/{'2','@'},
   /*0x20=>*/{'3','#'},
   /*0x21=>*/{'4','$'},
   /*0x22=>*/{'5','%'},
   /*0x23=>*/{'6','^'},
   /*0x24=>*/{'7','&'},
   /*0x25=>*/{'8','*'},
   /*0x26=>*/{'9','('},
   /*0x27=>*/{'0',')'},
   /*0x28=>*/{'\n','\n'},
   /*0x29=>*/{'_','_'},
   /*0x2A=>*/{0x08,0x08},
   /*0x2B=>*/{'\t','\t'},
   /*0x2C=>*/{' ',' '},
   /*0x2D=>*/{'-','_'},
   /*0x2E=>*/{'=','+'},
   /*0x2F=>*/{'[','{'},
   /*0x30=>*/{'}','}'},
   /*0x31=>*/{'\\','|'},
   /*0x32=>*/{'_','_'},
   /*0x33=>*/{';',':'},
   /*0x34=>*/{'\'','\"'},
   /*0x35=>*/{'`','~'},
   /*0x36=>*/{',','<'},
   /*0x37=>*/{'.','>'},
   /*0x38=>*/{'/','?'}, // '?'
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
   /*0x39=>*/{'_','_'},
             {0,0}
};


#endif
