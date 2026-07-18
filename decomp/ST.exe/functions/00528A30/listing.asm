FUN_00528a30:
00528A30  55                        PUSH EBP
00528A31  8B EC                     MOV EBP,ESP
00528A33  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00528A36  B8 11 27 00 00            MOV EAX,0x2711
00528A3B  81 E1 FF 00 00 00         AND ECX,0xff
00528A41  49                        DEC ECX
00528A42  81 F9 99 00 00 00         CMP ECX,0x99
00528A48  0F 87 11 05 00 00         JA 0x00528f5f
switchD_00528a4e::switchD:
00528A4E  FF 24 8D 64 8F 52 00      JMP dword ptr [ECX*0x4 + 0x528f64]
switchD_00528a4e::caseD_1:
00528A55  B8 94 5C 00 00            MOV EAX,0x5c94
00528A5A  5D                        POP EBP
00528A5B  C3                        RET
switchD_00528a4e::caseD_2:
00528A5C  B8 95 5C 00 00            MOV EAX,0x5c95
00528A61  5D                        POP EBP
00528A62  C3                        RET
switchD_00528a4e::caseD_7f:
00528A63  B8 96 5C 00 00            MOV EAX,0x5c96
00528A68  5D                        POP EBP
00528A69  C3                        RET
switchD_00528a4e::caseD_3:
00528A6A  B8 97 5C 00 00            MOV EAX,0x5c97
00528A6F  5D                        POP EBP
00528A70  C3                        RET
switchD_00528a4e::caseD_80:
00528A71  B8 29 5D 00 00            MOV EAX,0x5d29
00528A76  5D                        POP EBP
00528A77  C3                        RET
switchD_00528a4e::caseD_4:
00528A78  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528A7B  25 FF 00 00 00            AND EAX,0xff
00528A80  48                        DEC EAX
00528A81  74 11                     JZ 0x00528a94
00528A83  48                        DEC EAX
00528A84  74 07                     JZ 0x00528a8d
00528A86  B8 9A 5C 00 00            MOV EAX,0x5c9a
00528A8B  5D                        POP EBP
00528A8C  C3                        RET
LAB_00528a8d:
00528A8D  B8 99 5C 00 00            MOV EAX,0x5c99
00528A92  5D                        POP EBP
00528A93  C3                        RET
LAB_00528a94:
00528A94  B8 98 5C 00 00            MOV EAX,0x5c98
00528A99  5D                        POP EBP
00528A9A  C3                        RET
switchD_00528a4e::caseD_5:
00528A9B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528A9E  25 FF 00 00 00            AND EAX,0xff
00528AA3  48                        DEC EAX
00528AA4  74 11                     JZ 0x00528ab7
00528AA6  48                        DEC EAX
00528AA7  74 07                     JZ 0x00528ab0
00528AA9  B8 9D 5C 00 00            MOV EAX,0x5c9d
00528AAE  5D                        POP EBP
00528AAF  C3                        RET
LAB_00528ab0:
00528AB0  B8 9C 5C 00 00            MOV EAX,0x5c9c
00528AB5  5D                        POP EBP
00528AB6  C3                        RET
LAB_00528ab7:
00528AB7  B8 9B 5C 00 00            MOV EAX,0x5c9b
00528ABC  5D                        POP EBP
00528ABD  C3                        RET
switchD_00528a4e::caseD_6:
00528ABE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528AC1  25 FF 00 00 00            AND EAX,0xff
00528AC6  48                        DEC EAX
00528AC7  74 1B                     JZ 0x00528ae4
00528AC9  48                        DEC EAX
00528ACA  74 11                     JZ 0x00528add
00528ACC  48                        DEC EAX
00528ACD  74 07                     JZ 0x00528ad6
00528ACF  B8 A1 5C 00 00            MOV EAX,0x5ca1
00528AD4  5D                        POP EBP
00528AD5  C3                        RET
LAB_00528ad6:
00528AD6  B8 A0 5C 00 00            MOV EAX,0x5ca0
00528ADB  5D                        POP EBP
00528ADC  C3                        RET
LAB_00528add:
00528ADD  B8 9F 5C 00 00            MOV EAX,0x5c9f
00528AE2  5D                        POP EBP
00528AE3  C3                        RET
LAB_00528ae4:
00528AE4  B8 9E 5C 00 00            MOV EAX,0x5c9e
00528AE9  5D                        POP EBP
00528AEA  C3                        RET
switchD_00528a4e::caseD_7:
00528AEB  B8 A2 5C 00 00            MOV EAX,0x5ca2
00528AF0  5D                        POP EBP
00528AF1  C3                        RET
switchD_00528a4e::caseD_8:
00528AF2  B8 A3 5C 00 00            MOV EAX,0x5ca3
00528AF7  5D                        POP EBP
00528AF8  C3                        RET
switchD_00528a4e::caseD_9:
00528AF9  B8 A4 5C 00 00            MOV EAX,0x5ca4
00528AFE  5D                        POP EBP
00528AFF  C3                        RET
switchD_00528a4e::caseD_a:
00528B00  B8 A5 5C 00 00            MOV EAX,0x5ca5
00528B05  5D                        POP EBP
00528B06  C3                        RET
switchD_00528a4e::caseD_b:
00528B07  B8 A6 5C 00 00            MOV EAX,0x5ca6
00528B0C  5D                        POP EBP
00528B0D  C3                        RET
switchD_00528a4e::caseD_c:
00528B0E  B8 A7 5C 00 00            MOV EAX,0x5ca7
00528B13  5D                        POP EBP
00528B14  C3                        RET
switchD_00528a4e::caseD_d:
00528B15  B8 A8 5C 00 00            MOV EAX,0x5ca8
00528B1A  5D                        POP EBP
00528B1B  C3                        RET
switchD_00528a4e::caseD_84:
00528B1C  B8 2A 5D 00 00            MOV EAX,0x5d2a
00528B21  5D                        POP EBP
00528B22  C3                        RET
switchD_00528a4e::caseD_e:
00528B23  B8 A9 5C 00 00            MOV EAX,0x5ca9
00528B28  5D                        POP EBP
00528B29  C3                        RET
switchD_00528a4e::caseD_34:
00528B2A  B8 2B 5D 00 00            MOV EAX,0x5d2b
00528B2F  5D                        POP EBP
00528B30  C3                        RET
switchD_00528a4e::caseD_f:
00528B31  B8 AA 5C 00 00            MOV EAX,0x5caa
00528B36  5D                        POP EBP
00528B37  C3                        RET
switchD_00528a4e::caseD_10:
00528B38  B8 AB 5C 00 00            MOV EAX,0x5cab
00528B3D  5D                        POP EBP
00528B3E  C3                        RET
switchD_00528a4e::caseD_85:
00528B3F  B8 2C 5D 00 00            MOV EAX,0x5d2c
00528B44  5D                        POP EBP
00528B45  C3                        RET
switchD_00528a4e::caseD_11:
00528B46  B8 AC 5C 00 00            MOV EAX,0x5cac
00528B4B  5D                        POP EBP
00528B4C  C3                        RET
switchD_00528a4e::caseD_86:
00528B4D  B8 2D 5D 00 00            MOV EAX,0x5d2d
00528B52  5D                        POP EBP
00528B53  C3                        RET
switchD_00528a4e::caseD_12:
00528B54  B8 AD 5C 00 00            MOV EAX,0x5cad
00528B59  5D                        POP EBP
00528B5A  C3                        RET
switchD_00528a4e::caseD_13:
00528B5B  B8 AE 5C 00 00            MOV EAX,0x5cae
00528B60  5D                        POP EBP
00528B61  C3                        RET
switchD_00528a4e::caseD_87:
00528B62  B8 2E 5D 00 00            MOV EAX,0x5d2e
00528B67  5D                        POP EBP
00528B68  C3                        RET
switchD_00528a4e::caseD_14:
00528B69  B8 AF 5C 00 00            MOV EAX,0x5caf
00528B6E  5D                        POP EBP
00528B6F  C3                        RET
switchD_00528a4e::caseD_15:
00528B70  B8 B0 5C 00 00            MOV EAX,0x5cb0
00528B75  5D                        POP EBP
00528B76  C3                        RET
switchD_00528a4e::caseD_16:
00528B77  B8 B1 5C 00 00            MOV EAX,0x5cb1
00528B7C  5D                        POP EBP
00528B7D  C3                        RET
switchD_00528a4e::caseD_35:
00528B7E  B8 2F 5D 00 00            MOV EAX,0x5d2f
00528B83  5D                        POP EBP
00528B84  C3                        RET
switchD_00528a4e::caseD_17:
00528B85  B8 B2 5C 00 00            MOV EAX,0x5cb2
00528B8A  5D                        POP EBP
00528B8B  C3                        RET
switchD_00528a4e::caseD_88:
00528B8C  B8 30 5D 00 00            MOV EAX,0x5d30
00528B91  5D                        POP EBP
00528B92  C3                        RET
switchD_00528a4e::caseD_18:
00528B93  B8 B3 5C 00 00            MOV EAX,0x5cb3
00528B98  5D                        POP EBP
00528B99  C3                        RET
switchD_00528a4e::caseD_19:
00528B9A  B8 B4 5C 00 00            MOV EAX,0x5cb4
00528B9F  5D                        POP EBP
00528BA0  C3                        RET
switchD_00528a4e::caseD_1a:
00528BA1  B8 B5 5C 00 00            MOV EAX,0x5cb5
00528BA6  5D                        POP EBP
00528BA7  C3                        RET
switchD_00528a4e::caseD_1b:
00528BA8  B8 B7 5C 00 00            MOV EAX,0x5cb7
00528BAD  5D                        POP EBP
00528BAE  C3                        RET
switchD_00528a4e::caseD_1c:
00528BAF  B8 B8 5C 00 00            MOV EAX,0x5cb8
00528BB4  5D                        POP EBP
00528BB5  C3                        RET
switchD_00528a4e::caseD_1d:
00528BB6  B8 B9 5C 00 00            MOV EAX,0x5cb9
00528BBB  5D                        POP EBP
00528BBC  C3                        RET
switchD_00528a4e::caseD_89:
00528BBD  B8 31 5D 00 00            MOV EAX,0x5d31
00528BC2  5D                        POP EBP
00528BC3  C3                        RET
switchD_00528a4e::caseD_1e:
00528BC4  B8 BA 5C 00 00            MOV EAX,0x5cba
00528BC9  5D                        POP EBP
00528BCA  C3                        RET
switchD_00528a4e::caseD_8a:
00528BCB  B8 32 5D 00 00            MOV EAX,0x5d32
00528BD0  5D                        POP EBP
00528BD1  C3                        RET
switchD_00528a4e::caseD_20:
00528BD2  B8 BB 5C 00 00            MOV EAX,0x5cbb
00528BD7  5D                        POP EBP
00528BD8  C3                        RET
switchD_00528a4e::caseD_8b:
00528BD9  B8 33 5D 00 00            MOV EAX,0x5d33
00528BDE  5D                        POP EBP
00528BDF  C3                        RET
switchD_00528a4e::caseD_21:
00528BE0  B8 BC 5C 00 00            MOV EAX,0x5cbc
00528BE5  5D                        POP EBP
00528BE6  C3                        RET
switchD_00528a4e::caseD_8c:
00528BE7  B8 34 5D 00 00            MOV EAX,0x5d34
00528BEC  5D                        POP EBP
00528BED  C3                        RET
switchD_00528a4e::caseD_1f:
00528BEE  B8 BD 5C 00 00            MOV EAX,0x5cbd
00528BF3  5D                        POP EBP
00528BF4  C3                        RET
switchD_00528a4e::caseD_22:
00528BF5  B8 BE 5C 00 00            MOV EAX,0x5cbe
00528BFA  5D                        POP EBP
00528BFB  C3                        RET
switchD_00528a4e::caseD_23:
00528BFC  B8 BF 5C 00 00            MOV EAX,0x5cbf
00528C01  5D                        POP EBP
00528C02  C3                        RET
switchD_00528a4e::caseD_24:
00528C03  B8 C0 5C 00 00            MOV EAX,0x5cc0
00528C08  5D                        POP EBP
00528C09  C3                        RET
switchD_00528a4e::caseD_25:
00528C0A  B8 C1 5C 00 00            MOV EAX,0x5cc1
00528C0F  5D                        POP EBP
00528C10  C3                        RET
switchD_00528a4e::caseD_26:
00528C11  B8 C2 5C 00 00            MOV EAX,0x5cc2
00528C16  5D                        POP EBP
00528C17  C3                        RET
switchD_00528a4e::caseD_27:
00528C18  B8 C3 5C 00 00            MOV EAX,0x5cc3
00528C1D  5D                        POP EBP
00528C1E  C3                        RET
switchD_00528a4e::caseD_28:
00528C1F  B8 C4 5C 00 00            MOV EAX,0x5cc4
00528C24  5D                        POP EBP
00528C25  C3                        RET
switchD_00528a4e::caseD_29:
00528C26  B8 C5 5C 00 00            MOV EAX,0x5cc5
00528C2B  5D                        POP EBP
00528C2C  C3                        RET
switchD_00528a4e::caseD_2a:
00528C2D  B8 C6 5C 00 00            MOV EAX,0x5cc6
00528C32  5D                        POP EBP
00528C33  C3                        RET
switchD_00528a4e::caseD_2b:
00528C34  B8 C7 5C 00 00            MOV EAX,0x5cc7
00528C39  5D                        POP EBP
00528C3A  C3                        RET
switchD_00528a4e::caseD_2c:
00528C3B  B8 C8 5C 00 00            MOV EAX,0x5cc8
00528C40  5D                        POP EBP
00528C41  C3                        RET
switchD_00528a4e::caseD_2d:
00528C42  B8 C9 5C 00 00            MOV EAX,0x5cc9
00528C47  5D                        POP EBP
00528C48  C3                        RET
switchD_00528a4e::caseD_2e:
00528C49  B8 CA 5C 00 00            MOV EAX,0x5cca
00528C4E  5D                        POP EBP
00528C4F  C3                        RET
switchD_00528a4e::caseD_2f:
00528C50  B8 CB 5C 00 00            MOV EAX,0x5ccb
00528C55  5D                        POP EBP
00528C56  C3                        RET
switchD_00528a4e::caseD_30:
00528C57  B8 CC 5C 00 00            MOV EAX,0x5ccc
00528C5C  5D                        POP EBP
00528C5D  C3                        RET
switchD_00528a4e::caseD_31:
00528C5E  B8 CD 5C 00 00            MOV EAX,0x5ccd
00528C63  5D                        POP EBP
00528C64  C3                        RET
switchD_00528a4e::caseD_32:
00528C65  B8 B6 5C 00 00            MOV EAX,0x5cb6
00528C6A  5D                        POP EBP
00528C6B  C3                        RET
switchD_00528a4e::caseD_33:
00528C6C  B8 CE 5C 00 00            MOV EAX,0x5cce
00528C71  5D                        POP EBP
00528C72  C3                        RET
switchD_00528a4e::caseD_36:
00528C73  B8 CF 5C 00 00            MOV EAX,0x5ccf
00528C78  5D                        POP EBP
00528C79  C3                        RET
switchD_00528a4e::caseD_37:
00528C7A  B8 D0 5C 00 00            MOV EAX,0x5cd0
00528C7F  5D                        POP EBP
00528C80  C3                        RET
switchD_00528a4e::caseD_38:
00528C81  B8 D1 5C 00 00            MOV EAX,0x5cd1
00528C86  5D                        POP EBP
00528C87  C3                        RET
switchD_00528a4e::caseD_39:
00528C88  B8 D2 5C 00 00            MOV EAX,0x5cd2
00528C8D  5D                        POP EBP
00528C8E  C3                        RET
switchD_00528a4e::caseD_3a:
00528C8F  B8 D3 5C 00 00            MOV EAX,0x5cd3
00528C94  5D                        POP EBP
00528C95  C3                        RET
switchD_00528a4e::caseD_3b:
00528C96  B8 D4 5C 00 00            MOV EAX,0x5cd4
00528C9B  5D                        POP EBP
00528C9C  C3                        RET
switchD_00528a4e::caseD_3c:
00528C9D  B8 D5 5C 00 00            MOV EAX,0x5cd5
00528CA2  5D                        POP EBP
00528CA3  C3                        RET
switchD_00528a4e::caseD_91:
00528CA4  B8 39 5D 00 00            MOV EAX,0x5d39
00528CA9  5D                        POP EBP
00528CAA  C3                        RET
switchD_00528a4e::caseD_3d:
00528CAB  B8 D6 5C 00 00            MOV EAX,0x5cd6
00528CB0  5D                        POP EBP
00528CB1  C3                        RET
switchD_00528a4e::caseD_8d:
00528CB2  B8 35 5D 00 00            MOV EAX,0x5d35
00528CB7  5D                        POP EBP
00528CB8  C3                        RET
switchD_00528a4e::caseD_3e:
00528CB9  B8 D7 5C 00 00            MOV EAX,0x5cd7
00528CBE  5D                        POP EBP
00528CBF  C3                        RET
switchD_00528a4e::caseD_3f:
00528CC0  B8 D9 5C 00 00            MOV EAX,0x5cd9
00528CC5  5D                        POP EBP
00528CC6  C3                        RET
switchD_00528a4e::caseD_8e:
00528CC7  B8 36 5D 00 00            MOV EAX,0x5d36
00528CCC  5D                        POP EBP
00528CCD  C3                        RET
switchD_00528a4e::caseD_40:
00528CCE  B8 DA 5C 00 00            MOV EAX,0x5cda
00528CD3  5D                        POP EBP
00528CD4  C3                        RET
switchD_00528a4e::caseD_8f:
00528CD5  B8 37 5D 00 00            MOV EAX,0x5d37
00528CDA  5D                        POP EBP
00528CDB  C3                        RET
switchD_00528a4e::caseD_41:
00528CDC  B8 DB 5C 00 00            MOV EAX,0x5cdb
00528CE1  5D                        POP EBP
00528CE2  C3                        RET
switchD_00528a4e::caseD_42:
00528CE3  B8 DC 5C 00 00            MOV EAX,0x5cdc
00528CE8  5D                        POP EBP
00528CE9  C3                        RET
switchD_00528a4e::caseD_43:
00528CEA  B8 DD 5C 00 00            MOV EAX,0x5cdd
00528CEF  5D                        POP EBP
00528CF0  C3                        RET
switchD_00528a4e::caseD_96:
00528CF1  B8 3E 5D 00 00            MOV EAX,0x5d3e
00528CF6  5D                        POP EBP
00528CF7  C3                        RET
switchD_00528a4e::caseD_99:
00528CF8  B8 41 5D 00 00            MOV EAX,0x5d41
00528CFD  5D                        POP EBP
00528CFE  C3                        RET
switchD_00528a4e::caseD_94:
00528CFF  B8 3C 5D 00 00            MOV EAX,0x5d3c
00528D04  5D                        POP EBP
00528D05  C3                        RET
switchD_00528a4e::caseD_98:
00528D06  B8 40 5D 00 00            MOV EAX,0x5d40
00528D0B  5D                        POP EBP
00528D0C  C3                        RET
switchD_00528a4e::caseD_92:
00528D0D  B8 3A 5D 00 00            MOV EAX,0x5d3a
00528D12  5D                        POP EBP
00528D13  C3                        RET
switchD_00528a4e::caseD_93:
00528D14  B8 3B 5D 00 00            MOV EAX,0x5d3b
00528D19  5D                        POP EBP
00528D1A  C3                        RET
switchD_00528a4e::caseD_95:
00528D1B  B8 3D 5D 00 00            MOV EAX,0x5d3d
00528D20  5D                        POP EBP
00528D21  C3                        RET
switchD_00528a4e::caseD_97:
00528D22  B8 3F 5D 00 00            MOV EAX,0x5d3f
00528D27  5D                        POP EBP
00528D28  C3                        RET
switchD_00528a4e::caseD_9a:
00528D29  B8 42 5D 00 00            MOV EAX,0x5d42
00528D2E  5D                        POP EBP
00528D2F  C3                        RET
switchD_00528a4e::caseD_44:
00528D30  B8 DE 5C 00 00            MOV EAX,0x5cde
00528D35  5D                        POP EBP
00528D36  C3                        RET
switchD_00528a4e::caseD_45:
00528D37  B8 DF 5C 00 00            MOV EAX,0x5cdf
00528D3C  5D                        POP EBP
00528D3D  C3                        RET
switchD_00528a4e::caseD_46:
00528D3E  B8 E0 5C 00 00            MOV EAX,0x5ce0
00528D43  5D                        POP EBP
00528D44  C3                        RET
switchD_00528a4e::caseD_47:
00528D45  B8 E1 5C 00 00            MOV EAX,0x5ce1
00528D4A  5D                        POP EBP
00528D4B  C3                        RET
switchD_00528a4e::caseD_48:
00528D4C  B8 E2 5C 00 00            MOV EAX,0x5ce2
00528D51  5D                        POP EBP
00528D52  C3                        RET
switchD_00528a4e::caseD_49:
00528D53  B8 E3 5C 00 00            MOV EAX,0x5ce3
00528D58  5D                        POP EBP
00528D59  C3                        RET
switchD_00528a4e::caseD_4a:
00528D5A  B8 E4 5C 00 00            MOV EAX,0x5ce4
00528D5F  5D                        POP EBP
00528D60  C3                        RET
switchD_00528a4e::caseD_4b:
00528D61  B8 E5 5C 00 00            MOV EAX,0x5ce5
00528D66  5D                        POP EBP
00528D67  C3                        RET
switchD_00528a4e::caseD_4c:
00528D68  B8 E6 5C 00 00            MOV EAX,0x5ce6
00528D6D  5D                        POP EBP
00528D6E  C3                        RET
switchD_00528a4e::caseD_4d:
00528D6F  B8 E7 5C 00 00            MOV EAX,0x5ce7
00528D74  5D                        POP EBP
00528D75  C3                        RET
switchD_00528a4e::caseD_4e:
00528D76  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528D79  25 FF 00 00 00            AND EAX,0xff
00528D7E  48                        DEC EAX
00528D7F  74 11                     JZ 0x00528d92
00528D81  48                        DEC EAX
00528D82  74 07                     JZ 0x00528d8b
00528D84  B8 EA 5C 00 00            MOV EAX,0x5cea
00528D89  5D                        POP EBP
00528D8A  C3                        RET
LAB_00528d8b:
00528D8B  B8 E9 5C 00 00            MOV EAX,0x5ce9
00528D90  5D                        POP EBP
00528D91  C3                        RET
LAB_00528d92:
00528D92  B8 E8 5C 00 00            MOV EAX,0x5ce8
00528D97  5D                        POP EBP
00528D98  C3                        RET
switchD_00528a4e::caseD_4f:
00528D99  B8 EB 5C 00 00            MOV EAX,0x5ceb
00528D9E  5D                        POP EBP
00528D9F  C3                        RET
switchD_00528a4e::caseD_50:
00528DA0  B8 EC 5C 00 00            MOV EAX,0x5cec
00528DA5  5D                        POP EBP
00528DA6  C3                        RET
switchD_00528a4e::caseD_51:
00528DA7  B8 ED 5C 00 00            MOV EAX,0x5ced
00528DAC  5D                        POP EBP
00528DAD  C3                        RET
switchD_00528a4e::caseD_52:
00528DAE  B8 EE 5C 00 00            MOV EAX,0x5cee
00528DB3  5D                        POP EBP
00528DB4  C3                        RET
switchD_00528a4e::caseD_53:
00528DB5  B8 EF 5C 00 00            MOV EAX,0x5cef
00528DBA  5D                        POP EBP
00528DBB  C3                        RET
switchD_00528a4e::caseD_54:
00528DBC  B8 F0 5C 00 00            MOV EAX,0x5cf0
00528DC1  5D                        POP EBP
00528DC2  C3                        RET
switchD_00528a4e::caseD_55:
00528DC3  B8 F1 5C 00 00            MOV EAX,0x5cf1
00528DC8  5D                        POP EBP
00528DC9  C3                        RET
switchD_00528a4e::caseD_56:
00528DCA  B8 F2 5C 00 00            MOV EAX,0x5cf2
00528DCF  5D                        POP EBP
00528DD0  C3                        RET
switchD_00528a4e::caseD_57:
00528DD1  B8 F3 5C 00 00            MOV EAX,0x5cf3
00528DD6  5D                        POP EBP
00528DD7  C3                        RET
switchD_00528a4e::caseD_58:
00528DD8  B8 F4 5C 00 00            MOV EAX,0x5cf4
00528DDD  5D                        POP EBP
00528DDE  C3                        RET
switchD_00528a4e::caseD_59:
00528DDF  B8 F5 5C 00 00            MOV EAX,0x5cf5
00528DE4  5D                        POP EBP
00528DE5  C3                        RET
switchD_00528a4e::caseD_5a:
00528DE6  B8 F6 5C 00 00            MOV EAX,0x5cf6
00528DEB  5D                        POP EBP
00528DEC  C3                        RET
switchD_00528a4e::caseD_5b:
00528DED  B8 F7 5C 00 00            MOV EAX,0x5cf7
00528DF2  5D                        POP EBP
00528DF3  C3                        RET
switchD_00528a4e::caseD_5c:
00528DF4  B8 F8 5C 00 00            MOV EAX,0x5cf8
00528DF9  5D                        POP EBP
00528DFA  C3                        RET
switchD_00528a4e::caseD_5d:
00528DFB  B8 F9 5C 00 00            MOV EAX,0x5cf9
00528E00  5D                        POP EBP
00528E01  C3                        RET
switchD_00528a4e::caseD_5e:
00528E02  B8 FA 5C 00 00            MOV EAX,0x5cfa
00528E07  5D                        POP EBP
00528E08  C3                        RET
switchD_00528a4e::caseD_5f:
00528E09  B8 FB 5C 00 00            MOV EAX,0x5cfb
00528E0E  5D                        POP EBP
00528E0F  C3                        RET
switchD_00528a4e::caseD_60:
00528E10  B8 FC 5C 00 00            MOV EAX,0x5cfc
00528E15  5D                        POP EBP
00528E16  C3                        RET
switchD_00528a4e::caseD_61:
00528E17  B8 FE 5C 00 00            MOV EAX,0x5cfe
00528E1C  5D                        POP EBP
00528E1D  C3                        RET
switchD_00528a4e::caseD_62:
00528E1E  B8 FF 5C 00 00            MOV EAX,0x5cff
00528E23  5D                        POP EBP
00528E24  C3                        RET
switchD_00528a4e::caseD_63:
00528E25  B8 00 5D 00 00            MOV EAX,0x5d00
00528E2A  5D                        POP EBP
00528E2B  C3                        RET
switchD_00528a4e::caseD_65:
00528E2C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528E2F  25 FF 00 00 00            AND EAX,0xff
00528E34  48                        DEC EAX
00528E35  74 11                     JZ 0x00528e48
00528E37  48                        DEC EAX
00528E38  74 07                     JZ 0x00528e41
00528E3A  B8 06 5D 00 00            MOV EAX,0x5d06
00528E3F  5D                        POP EBP
00528E40  C3                        RET
LAB_00528e41:
00528E41  B8 05 5D 00 00            MOV EAX,0x5d05
00528E46  5D                        POP EBP
00528E47  C3                        RET
LAB_00528e48:
00528E48  B8 04 5D 00 00            MOV EAX,0x5d04
00528E4D  5D                        POP EBP
00528E4E  C3                        RET
switchD_00528a4e::caseD_66:
00528E4F  B8 07 5D 00 00            MOV EAX,0x5d07
00528E54  5D                        POP EBP
00528E55  C3                        RET
switchD_00528a4e::caseD_67:
00528E56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528E59  25 FF 00 00 00            AND EAX,0xff
00528E5E  48                        DEC EAX
00528E5F  74 11                     JZ 0x00528e72
00528E61  48                        DEC EAX
00528E62  74 07                     JZ 0x00528e6b
00528E64  B8 0A 5D 00 00            MOV EAX,0x5d0a
00528E69  5D                        POP EBP
00528E6A  C3                        RET
LAB_00528e6b:
00528E6B  B8 09 5D 00 00            MOV EAX,0x5d09
00528E70  5D                        POP EBP
00528E71  C3                        RET
LAB_00528e72:
00528E72  B8 08 5D 00 00            MOV EAX,0x5d08
00528E77  5D                        POP EBP
00528E78  C3                        RET
switchD_00528a4e::caseD_68:
00528E79  B8 0B 5D 00 00            MOV EAX,0x5d0b
00528E7E  5D                        POP EBP
00528E7F  C3                        RET
switchD_00528a4e::caseD_69:
00528E80  B8 0D 5D 00 00            MOV EAX,0x5d0d
00528E85  5D                        POP EBP
00528E86  C3                        RET
switchD_00528a4e::caseD_6a:
00528E87  B8 0E 5D 00 00            MOV EAX,0x5d0e
00528E8C  5D                        POP EBP
00528E8D  C3                        RET
switchD_00528a4e::caseD_6b:
00528E8E  B8 0F 5D 00 00            MOV EAX,0x5d0f
00528E93  5D                        POP EBP
00528E94  C3                        RET
switchD_00528a4e::caseD_6c:
00528E95  B8 10 5D 00 00            MOV EAX,0x5d10
00528E9A  5D                        POP EBP
00528E9B  C3                        RET
switchD_00528a4e::caseD_6d:
00528E9C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528E9F  25 FF 00 00 00            AND EAX,0xff
00528EA4  48                        DEC EAX
00528EA5  74 11                     JZ 0x00528eb8
00528EA7  48                        DEC EAX
00528EA8  74 07                     JZ 0x00528eb1
00528EAA  B8 13 5D 00 00            MOV EAX,0x5d13
00528EAF  5D                        POP EBP
00528EB0  C3                        RET
LAB_00528eb1:
00528EB1  B8 12 5D 00 00            MOV EAX,0x5d12
00528EB6  5D                        POP EBP
00528EB7  C3                        RET
LAB_00528eb8:
00528EB8  B8 11 5D 00 00            MOV EAX,0x5d11
00528EBD  5D                        POP EBP
00528EBE  C3                        RET
switchD_00528a4e::caseD_6e:
00528EBF  B8 14 5D 00 00            MOV EAX,0x5d14
00528EC4  5D                        POP EBP
00528EC5  C3                        RET
switchD_00528a4e::caseD_6f:
00528EC6  B8 15 5D 00 00            MOV EAX,0x5d15
00528ECB  5D                        POP EBP
00528ECC  C3                        RET
switchD_00528a4e::caseD_70:
00528ECD  B8 16 5D 00 00            MOV EAX,0x5d16
00528ED2  5D                        POP EBP
00528ED3  C3                        RET
switchD_00528a4e::caseD_71:
00528ED4  B8 17 5D 00 00            MOV EAX,0x5d17
00528ED9  5D                        POP EBP
00528EDA  C3                        RET
switchD_00528a4e::caseD_72:
00528EDB  B8 18 5D 00 00            MOV EAX,0x5d18
00528EE0  5D                        POP EBP
00528EE1  C3                        RET
switchD_00528a4e::caseD_73:
00528EE2  B8 19 5D 00 00            MOV EAX,0x5d19
00528EE7  5D                        POP EBP
00528EE8  C3                        RET
switchD_00528a4e::caseD_74:
00528EE9  B8 1A 5D 00 00            MOV EAX,0x5d1a
00528EEE  5D                        POP EBP
00528EEF  C3                        RET
switchD_00528a4e::caseD_75:
00528EF0  B8 1B 5D 00 00            MOV EAX,0x5d1b
00528EF5  5D                        POP EBP
00528EF6  C3                        RET
switchD_00528a4e::caseD_76:
00528EF7  B8 1C 5D 00 00            MOV EAX,0x5d1c
00528EFC  5D                        POP EBP
00528EFD  C3                        RET
switchD_00528a4e::caseD_77:
00528EFE  B8 1D 5D 00 00            MOV EAX,0x5d1d
00528F03  5D                        POP EBP
00528F04  C3                        RET
switchD_00528a4e::caseD_78:
00528F05  B8 1E 5D 00 00            MOV EAX,0x5d1e
00528F0A  5D                        POP EBP
00528F0B  C3                        RET
switchD_00528a4e::caseD_79:
00528F0C  B8 1F 5D 00 00            MOV EAX,0x5d1f
00528F11  5D                        POP EBP
00528F12  C3                        RET
switchD_00528a4e::caseD_7a:
00528F13  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528F16  25 FF 00 00 00            AND EAX,0xff
00528F1B  48                        DEC EAX
00528F1C  74 07                     JZ 0x00528f25
00528F1E  B8 21 5D 00 00            MOV EAX,0x5d21
00528F23  5D                        POP EBP
00528F24  C3                        RET
LAB_00528f25:
00528F25  B8 20 5D 00 00            MOV EAX,0x5d20
00528F2A  5D                        POP EBP
00528F2B  C3                        RET
switchD_00528a4e::caseD_7b:
00528F2C  B8 22 5D 00 00            MOV EAX,0x5d22
00528F31  5D                        POP EBP
00528F32  C3                        RET
switchD_00528a4e::caseD_7c:
00528F33  B8 23 5D 00 00            MOV EAX,0x5d23
00528F38  5D                        POP EBP
00528F39  C3                        RET
switchD_00528a4e::caseD_7d:
00528F3A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00528F3D  25 FF 00 00 00            AND EAX,0xff
00528F42  48                        DEC EAX
00528F43  74 07                     JZ 0x00528f4c
00528F45  B8 25 5D 00 00            MOV EAX,0x5d25
00528F4A  5D                        POP EBP
00528F4B  C3                        RET
LAB_00528f4c:
00528F4C  B8 24 5D 00 00            MOV EAX,0x5d24
00528F51  5D                        POP EBP
00528F52  C3                        RET
switchD_00528a4e::caseD_7e:
00528F53  B8 26 5D 00 00            MOV EAX,0x5d26
00528F58  5D                        POP EBP
00528F59  C3                        RET
switchD_00528a4e::caseD_64:
00528F5A  B8 43 5D 00 00            MOV EAX,0x5d43
switchD_00528a4e::caseD_90:
00528F5F  5D                        POP EBP
00528F60  C3                        RET
