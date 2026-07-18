FUN_0075df10:
0075DF10  55                        PUSH EBP
0075DF11  8B EC                     MOV EBP,ESP
0075DF13  51                        PUSH ECX
0075DF14  53                        PUSH EBX
0075DF15  56                        PUSH ESI
0075DF16  57                        PUSH EDI
0075DF17  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DF1A  68 00 04 00 00            PUSH 0x400
0075DF1F  6A 01                     PUSH 0x1
0075DF21  8B 07                     MOV EAX,dword ptr [EDI]
0075DF23  8B B7 B2 01 00 00         MOV ESI,dword ptr [EDI + 0x1b2]
0075DF29  57                        PUSH EDI
0075DF2A  FF 10                     CALL dword ptr [EAX]
0075DF2C  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0075DF2F  8B 0F                     MOV ECX,dword ptr [EDI]
0075DF31  68 00 04 00 00            PUSH 0x400
0075DF36  6A 01                     PUSH 0x1
0075DF38  57                        PUSH EDI
0075DF39  FF 11                     CALL dword ptr [ECX]
0075DF3B  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0075DF3E  8B 17                     MOV EDX,dword ptr [EDI]
0075DF40  68 00 04 00 00            PUSH 0x400
0075DF45  6A 01                     PUSH 0x1
0075DF47  57                        PUSH EDI
0075DF48  FF 12                     CALL dword ptr [EDX]
0075DF4A  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0075DF4D  8B 07                     MOV EAX,dword ptr [EDI]
0075DF4F  68 00 04 00 00            PUSH 0x400
0075DF54  6A 01                     PUSH 0x1
0075DF56  57                        PUSH EDI
0075DF57  FF 10                     CALL dword ptr [EAX]
0075DF59  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0075DF5C  33 C0                     XOR EAX,EAX
0075DF5E  C7 45 FC 00 69 5B 00      MOV dword ptr [EBP + -0x4],0x5b6900
0075DF65  C7 45 08 00 AF 1D FF      MOV dword ptr [EBP + 0x8],0xff1daf00
0075DF6C  BA 80 0B 4D FF            MOV EDX,0xff4d0b80
0075DF71  B9 00 8D 2C 00            MOV ECX,0x2c8d00
LAB_0075df76:
0075DF76  8B 5E 10                  MOV EBX,dword ptr [ESI + 0x10]
0075DF79  8B FA                     MOV EDI,EDX
0075DF7B  C1 FF 10                  SAR EDI,0x10
0075DF7E  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DF81  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DF84  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
0075DF87  81 C2 E9 66 01 00         ADD EDX,0x166e9
0075DF8D  C1 FF 10                  SAR EDI,0x10
0075DF90  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DF93  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
0075DF96  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075DF99  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DF9C  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0075DF9F  81 EF D2 B6 00 00         SUB EDI,0xb6d2
0075DFA5  89 0C 03                  MOV dword ptr [EBX + EAX*0x1],ECX
0075DFA8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075DFAB  81 E9 1A 58 00 00         SUB ECX,0x581a
0075DFB1  81 C3 A2 C5 01 00         ADD EBX,0x1c5a2
0075DFB7  83 C0 04                  ADD EAX,0x4
0075DFBA  81 F9 1A CB D4 FF         CMP ECX,0xffd4cb1a
0075DFC0  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075DFC3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075DFC6  7D AE                     JGE 0x0075df76
0075DFC8  5F                        POP EDI
0075DFC9  5E                        POP ESI
0075DFCA  5B                        POP EBX
0075DFCB  8B E5                     MOV ESP,EBP
0075DFCD  5D                        POP EBP
0075DFCE  C2 04 00                  RET 0x4
