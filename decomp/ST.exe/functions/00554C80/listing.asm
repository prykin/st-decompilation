FUN_00554c80:
00554C80  55                        PUSH EBP
00554C81  8B EC                     MOV EBP,ESP
00554C83  83 EC 48                  SUB ESP,0x48
00554C86  53                        PUSH EBX
00554C87  56                        PUSH ESI
00554C88  57                        PUSH EDI
00554C89  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00554C8C  E8 0A D8 EA FF            CALL 0x0040249b
00554C91  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00554C96  8D 55 BC                  LEA EDX,[EBP + -0x44]
00554C99  8D 4D B8                  LEA ECX,[EBP + -0x48]
00554C9C  6A 00                     PUSH 0x0
00554C9E  52                        PUSH EDX
00554C9F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00554CA2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554CA8  E8 43 8B 1D 00            CALL 0x0072d7f0
00554CAD  8B F0                     MOV ESI,EAX
00554CAF  83 C4 08                  ADD ESP,0x8
00554CB2  85 F6                     TEST ESI,ESI
00554CB4  0F 85 8E 01 00 00         JNZ 0x00554e48
00554CBA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00554CBD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00554CC0  57                        PUSH EDI
00554CC1  8B CE                     MOV ECX,ESI
00554CC3  E8 70 F9 EA FF            CALL 0x00404638
00554CC8  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00554CCB  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00554CCE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00554CD1  6A 00                     PUSH 0x0
00554CD3  50                        PUSH EAX
00554CD4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00554CD7  03 D0                     ADD EDX,EAX
00554CD9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00554CDC  51                        PUSH ECX
00554CDD  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00554CE0  52                        PUSH EDX
00554CE1  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00554CE4  03 C2                     ADD EAX,EDX
00554CE6  50                        PUSH EAX
00554CE7  6A 00                     PUSH 0x0
00554CE9  51                        PUSH ECX
00554CEA  E8 81 F4 15 00            CALL 0x006b4170
00554CEF  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00554CF2  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00554CF5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00554CF8  52                        PUSH EDX
00554CF9  50                        PUSH EAX
00554CFA  51                        PUSH ECX
00554CFB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00554CFE  57                        PUSH EDI
00554CFF  E8 BC CC 1B 00            CALL 0x007119c0
00554D04  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00554D07  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00554D0A  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554D0D  03 C2                     ADD EAX,EDX
00554D0F  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00554D12  03 CA                     ADD ECX,EDX
00554D14  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
00554D17  52                        PUSH EDX
00554D18  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554D1B  52                        PUSH EDX
00554D1C  8B 16                     MOV EDX,dword ptr [ESI]
00554D1E  50                        PUSH EAX
00554D1F  51                        PUSH ECX
00554D20  6A 00                     PUSH 0x0
00554D22  52                        PUSH EDX
00554D23  50                        PUSH EAX
00554D24  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554D29  51                        PUSH ECX
00554D2A  50                        PUSH EAX
00554D2B  E8 A0 F5 15 00            CALL 0x006b42d0
00554D30  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00554D33  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00554D36  6A 00                     PUSH 0x0
00554D38  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
00554D3B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554D3E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00554D41  03 CA                     ADD ECX,EDX
00554D43  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
00554D46  52                        PUSH EDX
00554D47  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554D4A  52                        PUSH EDX
00554D4B  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00554D4E  50                        PUSH EAX
00554D4F  51                        PUSH ECX
00554D50  6A 00                     PUSH 0x0
00554D52  52                        PUSH EDX
00554D53  50                        PUSH EAX
00554D54  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554D59  51                        PUSH ECX
00554D5A  50                        PUSH EAX
00554D5B  E8 20 F9 15 00            CALL 0x006b4680
00554D60  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
00554D63  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00554D66  42                        INC EDX
00554D67  8B C2                     MOV EAX,EDX
00554D69  89 56 38                  MOV dword ptr [ESI + 0x38],EDX
00554D6C  3B C1                     CMP EAX,ECX
00554D6E  0F 8C 97 00 00 00         JL 0x00554e0b
00554D74  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00554D77  8B 5E 20                  MOV EBX,dword ptr [ESI + 0x20]
00554D7A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00554D7D  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00554D80  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
00554D83  2B D8                     SUB EBX,EAX
00554D85  53                        PUSH EBX
00554D86  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
00554D89  03 C1                     ADD EAX,ECX
00554D8B  53                        PUSH EBX
00554D8C  50                        PUSH EAX
00554D8D  52                        PUSH EDX
00554D8E  6A 00                     PUSH 0x0
00554D90  57                        PUSH EDI
00554D91  51                        PUSH ECX
00554D92  52                        PUSH EDX
00554D93  6A 00                     PUSH 0x0
00554D95  57                        PUSH EDI
00554D96  E8 55 08 16 00            CALL 0x006b55f0
00554D9B  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
00554D9E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00554DA1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554DA4  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00554DA7  6A 00                     PUSH 0x0
00554DA9  51                        PUSH ECX
00554DAA  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00554DAD  52                        PUSH EDX
00554DAE  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00554DB1  03 C1                     ADD EAX,ECX
00554DB3  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554DB6  50                        PUSH EAX
00554DB7  03 CF                     ADD ECX,EDI
00554DB9  51                        PUSH ECX
00554DBA  6A 00                     PUSH 0x0
00554DBC  52                        PUSH EDX
00554DBD  E8 AE F3 15 00            CALL 0x006b4170
00554DC2  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00554DC5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00554DC8  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554DCB  52                        PUSH EDX
00554DCC  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554DCF  52                        PUSH EDX
00554DD0  8B 16                     MOV EDX,dword ptr [ESI]
00554DD2  50                        PUSH EAX
00554DD3  51                        PUSH ECX
00554DD4  6A 00                     PUSH 0x0
00554DD6  52                        PUSH EDX
00554DD7  50                        PUSH EAX
00554DD8  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554DDD  51                        PUSH ECX
00554DDE  50                        PUSH EAX
00554DDF  E8 EC F4 15 00            CALL 0x006b42d0
00554DE4  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00554DE7  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00554DEA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00554DED  6A 00                     PUSH 0x0
00554DEF  52                        PUSH EDX
00554DF0  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00554DF3  52                        PUSH EDX
00554DF4  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00554DF7  50                        PUSH EAX
00554DF8  51                        PUSH ECX
00554DF9  6A 00                     PUSH 0x0
00554DFB  52                        PUSH EDX
00554DFC  50                        PUSH EAX
00554DFD  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554E02  51                        PUSH ECX
00554E03  50                        PUSH EAX
00554E04  E8 77 F8 15 00            CALL 0x006b4680
00554E09  EB 0B                     JMP 0x00554e16
LAB_00554e0b:
00554E0B  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
00554E0E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00554E11  03 C1                     ADD EAX,ECX
00554E13  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_00554e16:
00554E16  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00554E1C  6A 00                     PUSH 0x0
00554E1E  6A 00                     PUSH 0x0
00554E20  52                        PUSH EDX
00554E21  E8 4A 65 16 00            CALL 0x006bb370
00554E26  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
00554E29  85 C0                     TEST EAX,EAX
00554E2B  74 09                     JZ 0x00554e36
00554E2D  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
00554E30  51                        PUSH ECX
00554E31  FF D0                     CALL EAX
00554E33  83 C4 04                  ADD ESP,0x4
LAB_00554e36:
00554E36  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00554E39  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00554E3F  5F                        POP EDI
00554E40  5E                        POP ESI
00554E41  5B                        POP EBX
00554E42  8B E5                     MOV ESP,EBP
00554E44  5D                        POP EBP
00554E45  C2 04 00                  RET 0x4
LAB_00554e48:
00554E48  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00554E4B  68 98 8F 7C 00            PUSH 0x7c8f98
00554E50  68 CC 4C 7A 00            PUSH 0x7a4ccc
00554E55  56                        PUSH ESI
00554E56  6A 00                     PUSH 0x0
00554E58  68 F2 00 00 00            PUSH 0xf2
00554E5D  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554E62  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00554E67  E8 64 86 15 00            CALL 0x006ad4d0
00554E6C  83 C4 18                  ADD ESP,0x18
00554E6F  85 C0                     TEST EAX,EAX
00554E71  74 01                     JZ 0x00554e74
00554E73  CC                        INT3
LAB_00554e74:
00554E74  68 F3 00 00 00            PUSH 0xf3
00554E79  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554E7E  6A 00                     PUSH 0x0
00554E80  56                        PUSH ESI
00554E81  E8 BA 0F 15 00            CALL 0x006a5e40
00554E86  5F                        POP EDI
00554E87  5E                        POP ESI
00554E88  5B                        POP EBX
00554E89  8B E5                     MOV ESP,EBP
00554E8B  5D                        POP EBP
00554E8C  C2 04 00                  RET 0x4
