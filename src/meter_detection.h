/*
 Copyright (C) 2017-2022 Fredrik Öhrström (gpl-3.0-or-later)

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// This is the old style meter detection. Drivers are succesively rewritten
// from meter_xyz.cc to driver_xyz.cc only old style drivers are listed here.
// The new driver_xyz.cc file format is selfcontained so eventually this
// file be empty and go away.
//
// This file is only included into meters.cc
//
// List of numbers that can be used to detect the meter driver from a telegram.
//
//    meter driver,       manufacturer,  media,  version
//
#define METER_DETECTION \
    X(APATOR162, MANUFACTURER_APA,  0x06,  0x05) \
    X(APATOR162, MANUFACTURER_APA,  0x07,  0x05) \
    X(BFW240RADIO, MANUFACTURER_BFW,0x08,  0x02) \
    X(CCx01,     MANUFACTURER_GSS,  0x02,  0x01) \
    X(CMA12W,    MANUFACTURER_ELV,  0x1b,  0x20) \
    X(COMPACT5,  MANUFACTURER_TCH,  0x04,  0x45) \
    X(COMPACT5,  MANUFACTURER_TCH,  0xc3,  0x45) \
    X(COMPACT5,  MANUFACTURER_TCH,  0x43,  0x22) \
    X(COMPACT5,  MANUFACTURER_TCH,  0x43,  0x45) \
    X(DME_07,    MANUFACTURER_DME,  0x07,  0x7b) \
    X(EBZWMBE,   MANUFACTURER_EBZ,  0x37,  0x02) \
    X(EURISII,   MANUFACTURER_INE,  0x08,  0x55) \
    X(EHZP,      MANUFACTURER_EMH,  0x02,  0x02) \
    X(ESYSWM,    MANUFACTURER_ESY,  0x37,  0x30) \
    X(ELF,       MANUFACTURER_APA,  0x04,  0x40) \
    X(EM24,      MANUFACTURER_KAM,  0x02,  0x33) \
    X(EMERLIN868,MANUFACTURER_ELR,  0x37,  0x11) \
    X(EV200,     MANUFACTURER_ELR,  0x07,  0x0d) \
    X(EVO868,    MANUFACTURER_MAD,  0x07,  0x50) \
    X(FHKVDATAIII,MANUFACTURER_TCH, 0x80,  0x69) \
    X(FHKVDATAIII,MANUFACTURER_TCH, 0x80,  0x94) \
    X(FHKVDATAIV,MANUFACTURER_TCH,  0x08,  0x69) \
    X(FHKVDATAIV,MANUFACTURER_TCH,  0x08,  0x94) \
    X(HYDRUS,    MANUFACTURER_DME,  0x07,  0x70) \
    X(HYDRUS,    MANUFACTURER_HYD,  0x07,  0x24) \
    X(HYDRUS,    MANUFACTURER_HYD,  0x07,  0x8b) \
    X(HYDRUS,    MANUFACTURER_HYD,  0x06,  0x8b) \
    X(HYDRUS,    MANUFACTURER_DME,  0x06,  0x70) \
    X(HYDRUS,    MANUFACTURER_DME,  0x16,  0x70) \
    X(HYDROCALM3,MANUFACTURER_BMT,  0x0d,  0x0b) \
    X(HYDRODIGIT,MANUFACTURER_BMT,  0x06,  0x13) \
    X(HYDRODIGIT,MANUFACTURER_BMT,  0x07,  0x13) \
    X(EI6500,    MANUFACTURER_EIE,  0x1a,  0x0c) \
    X(IZAR,      MANUFACTURER_HYD,  0x07,  0x85) \
    X(IZAR,      MANUFACTURER_SAP,  0x15,    -1) \
    X(IZAR,      MANUFACTURER_SAP,  0x04,    -1) \
    X(IZAR,      MANUFACTURER_SAP,  0x07,  0x00) \
    X(IZAR,      MANUFACTURER_DME,  0x07,  0x78) \
    X(IZAR,      MANUFACTURER_HYD,  0x07,  0x86) \
    X(IZAR3,     MANUFACTURER_SAP,  0x00,  0x88) \
    X(LANSENSM,  MANUFACTURER_LAS,  0x1a,  0x03) \
    X(LANSENTH,  MANUFACTURER_LAS,  0x1b,  0x07) \
    X(LANSENPU,  MANUFACTURER_LAS,  0x00,  0x14) \
    X(LANSENPU,  MANUFACTURER_LAS,  0x00,  0x0b) \
    X(QCALORIC,  MANUFACTURER_LSE, 0x08,  0x35) \
    X(LSE_08,     MANUFACTURER_LSE, 0x08,  0x01) \
    X(MKRADIO3,  MANUFACTURER_TCH, 0x62,  0x74) \
    X(MKRADIO3,  MANUFACTURER_TCH, 0x72,  0x74) \
    X(MKRADIO4,  MANUFACTURER_TCH, 0x62,  0x95) \
    X(MKRADIO4,  MANUFACTURER_TCH, 0x62,  0x70) \
    X(MKRADIO4,  MANUFACTURER_TCH, 0x72,  0x95) \
    X(MKRADIO4,  MANUFACTURER_TCH, 0x72,  0x70)   \
    X(MULTICAL21, MANUFACTURER_KAM,  0x06,  0x1b) \
    X(MULTICAL21, MANUFACTURER_KAM,  0x16,  0x1b) \
    X(FLOWIQ2200,MANUFACTURER_KAW,  0x16,  0x3a) \
    X(FLOWIQ3100,MANUFACTURER_KAM,  0x16,  0x1d) \
    X(MULTICAL302,MANUFACTURER_KAM, 0x04,  0x30) \
    X(MULTICAL302,MANUFACTURER_KAM, 0x0d,  0x30) \
    X(MULTICAL302,MANUFACTURER_KAM, 0x0c,  0x30) \
    X(MULTICAL403,MANUFACTURER_KAM, 0x0a,  0x34) \
    X(MULTICAL403,MANUFACTURER_KAM, 0x0b,  0x34) \
    X(MULTICAL403,MANUFACTURER_KAM, 0x0c,  0x34) \
    X(MULTICAL403,MANUFACTURER_KAM, 0x0d,  0x34) \
    X(MULTICAL602,MANUFACTURER_KAM, 0x04,  0x1c) \
    X(MULTICAL603,MANUFACTURER_KAM, 0x04,  0x35) \
    X(MULTICAL803,MANUFACTURER_KAM, 0x04,  0x39) \
    X(OMNIPOWER,  MANUFACTURER_KAM, 0x02,  0x30) \
    X(RFMAMB,     MANUFACTURER_BMT, 0x1b,  0x10) \
    X(RFMTX1,     MANUFACTURER_BMT, 0x07,  0x05) \
    X(SENSOSTAR,  MANUFACTURER_EFE, 0x04,  0x00) \
    X(TSD2,       MANUFACTURER_TCH, 0xf0,  0x76) \
    X(Q400,       MANUFACTURER_AXI, 0x07,  0x10) \
    X(QCALORIC,   MANUFACTURER_QDS, 0x08,  0x35) \
    X(QCALORIC,   MANUFACTURER_QDS, 0x08,  0x34) \
    X(QHEAT,      MANUFACTURER_QDS, 0x04,  0x23) \
    X(QSMOKE,     MANUFACTURER_QDS, 0x1a,  0x21) \
    X(QSMOKE,     MANUFACTURER_QDS, 0x1a,  0x23) \
    X(SONTEX868,  MANUFACTURER_SON, 0x08,  0x16) \
    X(TOPASESKR,  MANUFACTURER_AMT, 0x06,  0xf1) \
    X(TOPASESKR,  MANUFACTURER_AMT, 0x07,  0xf1) \
    X(ULTRIMIS,   MANUFACTURER_APA, 0x16,  0x01) \
    X(UNISMART,   MANUFACTURER_AMX, 0x03,  0x01) \
    X(VARIO451,   MANUFACTURER_TCH, 0x04,  0x27) \
    X(VARIO451,   MANUFACTURER_TCH, 0xc3,  0x27) \
    X(WATERSTARM, MANUFACTURER_DWZ, 0x06,  0x02) \
    X(WATERSTARM, MANUFACTURER_DWZ, 0x07,  0x02) \
    X(WATERSTARM, MANUFACTURER_EFE, 0x07,  0x03) \
    X(WHE46X,     MANUFACTURER_LSE, 0x08,  0x18) \
    X(WHE5X,      MANUFACTURER_LSE, 0x08,  0x34) \
    X(WEH_07,     MANUFACTURER_WEH, 0x07,  0xfe) \
    X(MUNIA,      MANUFACTURER_WEP, 0x1b,  0x02) \


// End of list
