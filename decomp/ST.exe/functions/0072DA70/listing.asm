FUN_0072da70:
0072DA70  55                        PUSH EBP
0072DA71  8B EC                     MOV EBP,ESP
0072DA73  57                        PUSH EDI
0072DA74  56                        PUSH ESI
0072DA75  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0072DA78  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072DA7B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072DA7E  8B C1                     MOV EAX,ECX
0072DA80  8B D1                     MOV EDX,ECX
0072DA82  03 C6                     ADD EAX,ESI
0072DA84  3B FE                     CMP EDI,ESI
0072DA86  76 08                     JBE 0x0072da90
0072DA88  3B F8                     CMP EDI,EAX
0072DA8A  0F 82 78 01 00 00         JC 0x0072dc08
LAB_0072da90:
0072DA90  F7 C7 03 00 00 00         TEST EDI,0x3
0072DA96  75 14                     JNZ 0x0072daac
0072DA98  C1 E9 02                  SHR ECX,0x2
0072DA9B  83 E2 03                  AND EDX,0x3
0072DA9E  83 F9 08                  CMP ECX,0x8
0072DAA1  72 29                     JC 0x0072dacc
0072DAA3  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0072daa5::switchD:
0072DAA5  FF 24 95 B8 DB 72 00      JMP dword ptr [EDX*0x4 + 0x72dbb8]
LAB_0072daac:
0072DAAC  8B C7                     MOV EAX,EDI
0072DAAE  BA 03 00 00 00            MOV EDX,0x3
0072DAB3  83 E9 04                  SUB ECX,0x4
0072DAB6  72 0C                     JC 0x0072dac4
switchD_0072dac4::default:
0072DAB8  83 E0 03                  AND EAX,0x3
0072DABB  03 C8                     ADD ECX,EAX
switchD_0072dabd::switchD:
0072DABD  FF 24 85 D0 DA 72 00      JMP dword ptr [EAX*0x4 + 0x72dad0]
switchD_0072dac4::switchD:
0072DAC4  FF 24 8D C8 DB 72 00      JMP dword ptr [ECX*0x4 + 0x72dbc8]
switchD_0072dacc::switchD:
0072DACC  FF 24 8D 4C DB 72 00      JMP dword ptr [ECX*0x4 + 0x72db4c]
switchD_0072dabd::caseD_1:
0072DAE0  23 D1                     AND EDX,ECX
0072DAE2  8A 06                     MOV AL,byte ptr [ESI]
0072DAE4  88 07                     MOV byte ptr [EDI],AL
0072DAE6  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DAE9  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DAEC  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DAEF  C1 E9 02                  SHR ECX,0x2
0072DAF2  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DAF5  83 C6 03                  ADD ESI,0x3
0072DAF8  83 C7 03                  ADD EDI,0x3
0072DAFB  83 F9 08                  CMP ECX,0x8
0072DAFE  72 CC                     JC 0x0072dacc
0072DB00  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0072db02::switchD:
0072DB02  FF 24 95 B8 DB 72 00      JMP dword ptr [EDX*0x4 + 0x72dbb8]
switchD_0072dabd::caseD_2:
0072DB0C  23 D1                     AND EDX,ECX
0072DB0E  8A 06                     MOV AL,byte ptr [ESI]
0072DB10  88 07                     MOV byte ptr [EDI],AL
0072DB12  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DB15  C1 E9 02                  SHR ECX,0x2
0072DB18  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DB1B  83 C6 02                  ADD ESI,0x2
0072DB1E  83 C7 02                  ADD EDI,0x2
0072DB21  83 F9 08                  CMP ECX,0x8
0072DB24  72 A6                     JC 0x0072dacc
0072DB26  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0072db28::switchD:
0072DB28  FF 24 95 B8 DB 72 00      JMP dword ptr [EDX*0x4 + 0x72dbb8]
switchD_0072dabd::caseD_3:
0072DB30  23 D1                     AND EDX,ECX
0072DB32  8A 06                     MOV AL,byte ptr [ESI]
0072DB34  88 07                     MOV byte ptr [EDI],AL
0072DB36  46                        INC ESI
0072DB37  C1 E9 02                  SHR ECX,0x2
0072DB3A  47                        INC EDI
0072DB3B  83 F9 08                  CMP ECX,0x8
0072DB3E  72 8C                     JC 0x0072dacc
0072DB40  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0072db42::switchD:
0072DB42  FF 24 95 B8 DB 72 00      JMP dword ptr [EDX*0x4 + 0x72dbb8]
switchD_0072dacc::caseD_7:
0072DB6C  8B 44 8E E4               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
0072DB70  89 44 8F E4               MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
switchD_0072dacc::caseD_6:
0072DB74  8B 44 8E E8               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
0072DB78  89 44 8F E8               MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
switchD_0072dacc::caseD_5:
0072DB7C  8B 44 8E EC               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
0072DB80  89 44 8F EC               MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
switchD_0072dacc::caseD_4:
0072DB84  8B 44 8E F0               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
0072DB88  89 44 8F F0               MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
switchD_0072dacc::caseD_3:
0072DB8C  8B 44 8E F4               MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
0072DB90  89 44 8F F4               MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
switchD_0072dacc::caseD_2:
0072DB94  8B 44 8E F8               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
0072DB98  89 44 8F F8               MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
switchD_0072dacc::caseD_1:
0072DB9C  8B 44 8E FC               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
0072DBA0  89 44 8F FC               MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
0072DBA4  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
0072DBAB  03 F0                     ADD ESI,EAX
0072DBAD  03 F8                     ADD EDI,EAX
switchD_0072dacc::caseD_0:
0072DBAF  FF 24 95 B8 DB 72 00      JMP dword ptr [EDX*0x4 + 0x72dbb8]
switchD_0072daa5::caseD_0:
0072DBC8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DBCB  5E                        POP ESI
0072DBCC  5F                        POP EDI
0072DBCD  C9                        LEAVE
0072DBCE  C3                        RET
switchD_0072daa5::caseD_1:
0072DBD0  8A 06                     MOV AL,byte ptr [ESI]
0072DBD2  88 07                     MOV byte ptr [EDI],AL
0072DBD4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DBD7  5E                        POP ESI
0072DBD8  5F                        POP EDI
0072DBD9  C9                        LEAVE
0072DBDA  C3                        RET
switchD_0072daa5::caseD_2:
0072DBDC  8A 06                     MOV AL,byte ptr [ESI]
0072DBDE  88 07                     MOV byte ptr [EDI],AL
0072DBE0  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DBE3  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DBE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DBE9  5E                        POP ESI
0072DBEA  5F                        POP EDI
0072DBEB  C9                        LEAVE
0072DBEC  C3                        RET
switchD_0072daa5::caseD_3:
0072DBF0  8A 06                     MOV AL,byte ptr [ESI]
0072DBF2  88 07                     MOV byte ptr [EDI],AL
0072DBF4  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DBF7  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DBFA  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DBFD  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DC00  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DC03  5E                        POP ESI
0072DC04  5F                        POP EDI
0072DC05  C9                        LEAVE
0072DC06  C3                        RET
LAB_0072dc08:
0072DC08  8D 74 31 FC               LEA ESI,[ECX + ESI*0x1 + -0x4]
0072DC0C  8D 7C 39 FC               LEA EDI,[ECX + EDI*0x1 + -0x4]
0072DC10  F7 C7 03 00 00 00         TEST EDI,0x3
0072DC16  75 24                     JNZ 0x0072dc3c
0072DC18  C1 E9 02                  SHR ECX,0x2
0072DC1B  83 E2 03                  AND EDX,0x3
0072DC1E  83 F9 08                  CMP ECX,0x8
0072DC21  72 0D                     JC 0x0072dc30
0072DC23  FD                        STD
0072DC24  F3 A5                     MOVSD.REP ES:EDI,ESI
0072DC26  FC                        CLD
switchD_0072dc27::switchD:
0072DC27  FF 24 95 50 DD 72 00      JMP dword ptr [EDX*0x4 + 0x72dd50]
LAB_0072dc30:
0072DC30  F7 D9                     NEG ECX
switchD_0072dc32::switchD:
0072DC32  FF 24 8D 00 DD 72 00      JMP dword ptr [ECX*0x4 + 0x72dd00]
LAB_0072dc3c:
0072DC3C  8B C7                     MOV EAX,EDI
0072DC3E  BA 03 00 00 00            MOV EDX,0x3
0072DC43  83 F9 04                  CMP ECX,0x4
0072DC46  72 0C                     JC 0x0072dc54
switchD_0072dc54::default:
0072DC48  83 E0 03                  AND EAX,0x3
0072DC4B  2B C8                     SUB ECX,EAX
switchD_0072dc4d::switchD:
0072DC4D  FF 24 85 58 DC 72 00      JMP dword ptr [EAX*0x4 + 0x72dc58]
switchD_0072dc54::switchD:
0072DC54  FF 24 8D 50 DD 72 00      JMP dword ptr [ECX*0x4 + 0x72dd50]
switchD_0072dc4d::caseD_1:
0072DC68  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DC6B  23 D1                     AND EDX,ECX
0072DC6D  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DC70  4E                        DEC ESI
0072DC71  C1 E9 02                  SHR ECX,0x2
0072DC74  4F                        DEC EDI
0072DC75  83 F9 08                  CMP ECX,0x8
0072DC78  72 B6                     JC 0x0072dc30
0072DC7A  FD                        STD
0072DC7B  F3 A5                     MOVSD.REP ES:EDI,ESI
0072DC7D  FC                        CLD
switchD_0072dc7e::switchD:
0072DC7E  FF 24 95 50 DD 72 00      JMP dword ptr [EDX*0x4 + 0x72dd50]
switchD_0072dc4d::caseD_2:
0072DC88  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DC8B  23 D1                     AND EDX,ECX
0072DC8D  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DC90  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DC93  C1 E9 02                  SHR ECX,0x2
0072DC96  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DC99  83 EE 02                  SUB ESI,0x2
0072DC9C  83 EF 02                  SUB EDI,0x2
0072DC9F  83 F9 08                  CMP ECX,0x8
0072DCA2  72 8C                     JC 0x0072dc30
0072DCA4  FD                        STD
0072DCA5  F3 A5                     MOVSD.REP ES:EDI,ESI
0072DCA7  FC                        CLD
switchD_0072dca8::switchD:
0072DCA8  FF 24 95 50 DD 72 00      JMP dword ptr [EDX*0x4 + 0x72dd50]
switchD_0072dc4d::caseD_3:
0072DCB0  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DCB3  23 D1                     AND EDX,ECX
0072DCB5  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DCB8  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DCBB  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DCBE  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DCC1  C1 E9 02                  SHR ECX,0x2
0072DCC4  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DCC7  83 EE 03                  SUB ESI,0x3
0072DCCA  83 EF 03                  SUB EDI,0x3
0072DCCD  83 F9 08                  CMP ECX,0x8
0072DCD0  0F 82 5A FF FF FF         JC 0x0072dc30
0072DCD6  FD                        STD
0072DCD7  F3 A5                     MOVSD.REP ES:EDI,ESI
0072DCD9  FC                        CLD
switchD_0072dcda::switchD:
0072DCDA  FF 24 95 50 DD 72 00      JMP dword ptr [EDX*0x4 + 0x72dd50]
switchD_0072dc32::caseD_7:
0072DD04  8B 44 8E 1C               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
0072DD08  89 44 8F 1C               MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
switchD_0072dc32::caseD_6:
0072DD0C  8B 44 8E 18               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
0072DD10  89 44 8F 18               MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
switchD_0072dc32::caseD_5:
0072DD14  8B 44 8E 14               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
0072DD18  89 44 8F 14               MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
switchD_0072dc32::caseD_4:
0072DD1C  8B 44 8E 10               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
0072DD20  89 44 8F 10               MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
switchD_0072dc32::caseD_3:
0072DD24  8B 44 8E 0C               MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
0072DD28  89 44 8F 0C               MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
switchD_0072dc32::caseD_2:
0072DD2C  8B 44 8E 08               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
0072DD30  89 44 8F 08               MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
switchD_0072dc32::caseD_1:
0072DD34  8B 44 8E 04               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
0072DD38  89 44 8F 04               MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
0072DD3C  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
0072DD43  03 F0                     ADD ESI,EAX
0072DD45  03 F8                     ADD EDI,EAX
switchD_0072dc32::caseD_0:
0072DD47  FF 24 95 50 DD 72 00      JMP dword ptr [EDX*0x4 + 0x72dd50]
switchD_0072dc27::caseD_0:
0072DD60  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DD63  5E                        POP ESI
0072DD64  5F                        POP EDI
0072DD65  C9                        LEAVE
0072DD66  C3                        RET
switchD_0072dc27::caseD_1:
0072DD68  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DD6B  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DD6E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DD71  5E                        POP ESI
0072DD72  5F                        POP EDI
0072DD73  C9                        LEAVE
0072DD74  C3                        RET
switchD_0072dc27::caseD_2:
0072DD78  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DD7B  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DD7E  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DD81  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DD84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DD87  5E                        POP ESI
0072DD88  5F                        POP EDI
0072DD89  C9                        LEAVE
0072DD8A  C3                        RET
switchD_0072dc27::caseD_3:
0072DD8C  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072DD8F  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072DD92  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0072DD95  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072DD98  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072DD9B  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072DD9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072DDA1  5E                        POP ESI
0072DDA2  5F                        POP EDI
0072DDA3  C9                        LEAVE
0072DDA4  C3                        RET
