FUN_00529d80:
00529D80  55                        PUSH EBP
00529D81  8B EC                     MOV EBP,ESP
00529D83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00529D86  48                        DEC EAX
00529D87  0F 84 E3 00 00 00         JZ 0x00529e70
00529D8D  48                        DEC EAX
00529D8E  0F 84 AA 00 00 00         JZ 0x00529e3e
00529D94  48                        DEC EAX
00529D95  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00529D98  74 6E                     JZ 0x00529e08
00529D9A  83 F8 0C                  CMP EAX,0xc
00529D9D  77 62                     JA 0x00529e01
switchD_00529d9f::switchD:
00529D9F  FF 24 85 AC 9E 52 00      JMP dword ptr [EAX*0x4 + 0x529eac]
switchD_00529d9f::caseD_0:
00529DA6  B8 4E 5C 00 00            MOV EAX,0x5c4e
00529DAB  5D                        POP EBP
00529DAC  C3                        RET
switchD_00529d9f::caseD_1:
00529DAD  B8 4F 5C 00 00            MOV EAX,0x5c4f
00529DB2  5D                        POP EBP
00529DB3  C3                        RET
switchD_00529d9f::caseD_2:
00529DB4  B8 50 5C 00 00            MOV EAX,0x5c50
00529DB9  5D                        POP EBP
00529DBA  C3                        RET
switchD_00529d9f::caseD_3:
00529DBB  B8 51 5C 00 00            MOV EAX,0x5c51
00529DC0  5D                        POP EBP
00529DC1  C3                        RET
switchD_00529d9f::caseD_4:
00529DC2  B8 52 5C 00 00            MOV EAX,0x5c52
00529DC7  5D                        POP EBP
00529DC8  C3                        RET
switchD_00529d9f::caseD_5:
00529DC9  B8 53 5C 00 00            MOV EAX,0x5c53
00529DCE  5D                        POP EBP
00529DCF  C3                        RET
switchD_00529d9f::caseD_6:
00529DD0  B8 54 5C 00 00            MOV EAX,0x5c54
00529DD5  5D                        POP EBP
00529DD6  C3                        RET
switchD_00529d9f::caseD_7:
00529DD7  B8 55 5C 00 00            MOV EAX,0x5c55
00529DDC  5D                        POP EBP
00529DDD  C3                        RET
switchD_00529d9f::caseD_8:
00529DDE  B8 56 5C 00 00            MOV EAX,0x5c56
00529DE3  5D                        POP EBP
00529DE4  C3                        RET
switchD_00529d9f::caseD_9:
00529DE5  B8 57 5C 00 00            MOV EAX,0x5c57
00529DEA  5D                        POP EBP
00529DEB  C3                        RET
switchD_00529d9f::caseD_a:
00529DEC  B8 58 5C 00 00            MOV EAX,0x5c58
00529DF1  5D                        POP EBP
00529DF2  C3                        RET
switchD_00529d9f::caseD_b:
00529DF3  B8 59 5C 00 00            MOV EAX,0x5c59
00529DF8  5D                        POP EBP
00529DF9  C3                        RET
switchD_00529d9f::caseD_c:
00529DFA  B8 5A 5C 00 00            MOV EAX,0x5c5a
00529DFF  5D                        POP EBP
00529E00  C3                        RET
switchD_00529d9f::default:
00529E01  B8 5B 5C 00 00            MOV EAX,0x5c5b
00529E06  5D                        POP EBP
00529E07  C3                        RET
LAB_00529e08:
00529E08  83 F8 04                  CMP EAX,0x4
00529E0B  77 2A                     JA 0x00529e37
switchD_00529e0d::switchD:
00529E0D  FF 24 85 E0 9E 52 00      JMP dword ptr [EAX*0x4 + 0x529ee0]
switchD_00529e0d::caseD_0:
00529E14  B8 44 5C 00 00            MOV EAX,0x5c44
00529E19  5D                        POP EBP
00529E1A  C3                        RET
switchD_00529e0d::caseD_1:
00529E1B  B8 45 5C 00 00            MOV EAX,0x5c45
00529E20  5D                        POP EBP
00529E21  C3                        RET
switchD_00529e0d::caseD_2:
00529E22  B8 46 5C 00 00            MOV EAX,0x5c46
00529E27  5D                        POP EBP
00529E28  C3                        RET
switchD_00529e0d::caseD_3:
00529E29  B8 47 5C 00 00            MOV EAX,0x5c47
00529E2E  5D                        POP EBP
00529E2F  C3                        RET
switchD_00529e0d::caseD_4:
00529E30  B8 48 5C 00 00            MOV EAX,0x5c48
00529E35  5D                        POP EBP
00529E36  C3                        RET
switchD_00529e0d::default:
00529E37  B8 49 5C 00 00            MOV EAX,0x5c49
00529E3C  5D                        POP EBP
00529E3D  C3                        RET
LAB_00529e3e:
00529E3E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00529E41  83 F8 03                  CMP EAX,0x3
00529E44  77 23                     JA 0x00529e69
switchD_00529e46::switchD:
00529E46  FF 24 85 F4 9E 52 00      JMP dword ptr [EAX*0x4 + 0x529ef4]
switchD_00529e46::caseD_0:
00529E4D  B8 3A 5C 00 00            MOV EAX,0x5c3a
00529E52  5D                        POP EBP
00529E53  C3                        RET
switchD_00529e46::caseD_1:
00529E54  B8 3B 5C 00 00            MOV EAX,0x5c3b
00529E59  5D                        POP EBP
00529E5A  C3                        RET
switchD_00529e46::caseD_2:
00529E5B  B8 3C 5C 00 00            MOV EAX,0x5c3c
00529E60  5D                        POP EBP
00529E61  C3                        RET
switchD_00529e46::caseD_3:
00529E62  B8 3D 5C 00 00            MOV EAX,0x5c3d
00529E67  5D                        POP EBP
00529E68  C3                        RET
switchD_00529e46::default:
00529E69  B8 3E 5C 00 00            MOV EAX,0x5c3e
00529E6E  5D                        POP EBP
00529E6F  C3                        RET
LAB_00529e70:
00529E70  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00529E73  83 F8 04                  CMP EAX,0x4
00529E76  77 2A                     JA 0x00529ea2
switchD_00529e78::switchD:
00529E78  FF 24 85 04 9F 52 00      JMP dword ptr [EAX*0x4 + 0x529f04]
switchD_00529e78::caseD_0:
00529E7F  B8 30 5C 00 00            MOV EAX,0x5c30
00529E84  5D                        POP EBP
00529E85  C3                        RET
switchD_00529e78::caseD_1:
00529E86  B8 31 5C 00 00            MOV EAX,0x5c31
00529E8B  5D                        POP EBP
00529E8C  C3                        RET
switchD_00529e78::caseD_2:
00529E8D  B8 32 5C 00 00            MOV EAX,0x5c32
00529E92  5D                        POP EBP
00529E93  C3                        RET
switchD_00529e78::caseD_3:
00529E94  B8 33 5C 00 00            MOV EAX,0x5c33
00529E99  5D                        POP EBP
00529E9A  C3                        RET
switchD_00529e78::caseD_4:
00529E9B  B8 34 5C 00 00            MOV EAX,0x5c34
00529EA0  5D                        POP EBP
00529EA1  C3                        RET
switchD_00529e78::default:
00529EA2  B8 35 5C 00 00            MOV EAX,0x5c35
00529EA7  5D                        POP EBP
00529EA8  C3                        RET
