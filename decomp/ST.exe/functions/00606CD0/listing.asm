FUN_00606cd0:
00606CD0  55                        PUSH EBP
00606CD1  8B EC                     MOV EBP,ESP
00606CD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00606CD6  83 C0 CE                  ADD EAX,-0x32
00606CD9  83 F8 46                  CMP EAX,0x46
00606CDC  0F 87 A4 01 00 00         JA 0x00606e86
00606CE2  33 C9                     XOR ECX,ECX
00606CE4  8A 88 DC 6E 60 00         MOV CL,byte ptr [EAX + 0x606edc]
switchD_00606cea::switchD:
00606CEA  FF 24 8D B4 6E 60 00      JMP dword ptr [ECX*0x4 + 0x606eb4]
switchD_00606cea::caseD_32:
00606CF1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00606CF4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00606CF7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606CFA  C7 02 0B 00 00 00         MOV dword ptr [EDX],0xb
00606D00  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00606D03  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
00606D09  C7 01 06 00 00 00         MOV dword ptr [ECX],0x6
00606D0F  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00606D15  B8 BE 00 00 00            MOV EAX,0xbe
00606D1A  5D                        POP EBP
00606D1B  C2 14 00                  RET 0x14
switchD_00606cea::caseD_36:
00606D1E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00606D21  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00606D24  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00606D27  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
00606D2D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00606D30  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00606D36  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00606D3C  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00606D42  B8 64 00 00 00            MOV EAX,0x64
00606D47  5D                        POP EBP
00606D48  C2 14 00                  RET 0x14
switchD_00606cea::caseD_41:
00606D4B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00606D4E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00606D51  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00606D54  C7 01 0A 00 00 00         MOV dword ptr [ECX],0xa
00606D5A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00606D5D  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00606D63  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
00606D69  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00606D6F  B8 BE 00 00 00            MOV EAX,0xbe
00606D74  5D                        POP EBP
00606D75  C2 14 00                  RET 0x14
switchD_00606cea::caseD_3e:
00606D78  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00606D7B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00606D7E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606D81  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00606D87  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00606D8A  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00606D90  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00606D96  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00606D9C  B8 64 00 00 00            MOV EAX,0x64
00606DA1  5D                        POP EBP
00606DA2  C2 14 00                  RET 0x14
switchD_00606cea::caseD_48:
00606DA5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00606DA8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00606DAB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00606DAE  C7 00 0B 00 00 00         MOV dword ptr [EAX],0xb
00606DB4  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00606DB7  C7 01 04 00 00 00         MOV dword ptr [ECX],0x4
00606DBD  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
00606DC3  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00606DC9  B8 BE 00 00 00            MOV EAX,0xbe
00606DCE  5D                        POP EBP
00606DCF  C2 14 00                  RET 0x14
switchD_00606cea::caseD_46:
00606DD2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00606DD5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00606DD8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00606DDB  C7 01 05 00 00 00         MOV dword ptr [ECX],0x5
00606DE1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00606DE4  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00606DEA  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00606DF0  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00606DF6  B8 64 00 00 00            MOV EAX,0x64
00606DFB  5D                        POP EBP
00606DFC  C2 14 00                  RET 0x14
switchD_00606cea::caseD_53:
00606DFF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00606E02  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00606E05  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606E08  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00606E0E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00606E11  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00606E17  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00606E1D  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00606E23  B8 BE 00 00 00            MOV EAX,0xbe
00606E28  5D                        POP EBP
00606E29  C2 14 00                  RET 0x14
switchD_00606cea::caseD_5b:
00606E2C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00606E2F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00606E32  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00606E35  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00606E3B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00606E3E  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00606E44  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00606E4A  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00606E50  B8 78 00 00 00            MOV EAX,0x78
00606E55  5D                        POP EBP
00606E56  C2 14 00                  RET 0x14
switchD_00606cea::caseD_54:
00606E59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00606E5C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00606E5F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00606E62  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00606E68  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00606E6B  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00606E71  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00606E77  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00606E7D  B8 5A 00 00 00            MOV EAX,0x5a
00606E82  5D                        POP EBP
00606E83  C2 14 00                  RET 0x14
switchD_00606cea::caseD_6f:
00606E86  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00606E89  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00606E8C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606E8F  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00606E95  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00606E98  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00606E9E  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00606EA4  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00606EAA  B8 64 00 00 00            MOV EAX,0x64
00606EAF  5D                        POP EBP
00606EB0  C2 14 00                  RET 0x14
