FUN_004dbf30:
004DBF30  55                        PUSH EBP
004DBF31  8B EC                     MOV EBP,ESP
004DBF33  53                        PUSH EBX
004DBF34  56                        PUSH ESI
004DBF35  57                        PUSH EDI
004DBF36  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004DBF39  8B F1                     MOV ESI,ECX
004DBF3B  8B 84 BE D0 04 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x4d0]
004DBF42  85 C0                     TEST EAX,EAX
004DBF44  0F 84 84 01 00 00         JZ 0x004dc0ce
004DBF4A  8B 84 BE E8 04 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x4e8]
004DBF51  85 C0                     TEST EAX,EAX
004DBF53  0F 84 CC 00 00 00         JZ 0x004dc025
004DBF59  C7 84 BE E8 04 00 00 00 00 00 00  MOV dword ptr [ESI + EDI*0x4 + 0x4e8],0x0
004DBF64  8B 8C BE D0 04 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x4d0]
004DBF6B  8D 45 08                  LEA EAX,[EBP + 0x8]
004DBF6E  50                        PUSH EAX
004DBF6F  51                        PUSH ECX
004DBF70  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBF76  E8 55 A3 20 00            CALL 0x006e62d0
004DBF7B  85 C0                     TEST EAX,EAX
004DBF7D  75 31                     JNZ 0x004dbfb0
004DBF7F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004DBF82  8B 8B 1F 06 00 00         MOV ECX,dword ptr [EBX + 0x61f]
004DBF88  89 83 C0 04 00 00         MOV dword ptr [EBX + 0x4c0],EAX
004DBF8E  85 C9                     TEST ECX,ECX
004DBF90  74 1E                     JZ 0x004dbfb0
004DBF92  E8 57 8A F2 FF            CALL 0x004049ee
004DBF97  8B 93 1F 06 00 00         MOV EDX,dword ptr [EBX + 0x61f]
004DBF9D  52                        PUSH EDX
004DBF9E  E8 0D 23 25 00            CALL 0x0072e2b0
004DBFA3  83 C4 04                  ADD ESP,0x4
004DBFA6  C7 83 1F 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x61f],0x0
LAB_004dbfb0:
004DBFB0  B8 35 01 00 00            MOV EAX,0x135
004DBFB5  2B C7                     SUB EAX,EDI
004DBFB7  8B 0C 86                  MOV ECX,dword ptr [ESI + EAX*0x4]
004DBFBA  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
004DBFBD  85 C9                     TEST ECX,ECX
004DBFBF  0F 84 09 01 00 00         JZ 0x004dc0ce
004DBFC5  B9 3B 01 00 00            MOV ECX,0x13b
004DBFCA  2B CF                     SUB ECX,EDI
004DBFCC  83 3C 8E 00               CMP dword ptr [ESI + ECX*0x4],0x0
004DBFD0  0F 84 F8 00 00 00         JZ 0x004dc0ce
004DBFD6  BA 39 01 00 00            MOV EDX,0x139
004DBFDB  8D 4D 08                  LEA ECX,[EBP + 0x8]
004DBFDE  2B D7                     SUB EDX,EDI
004DBFE0  51                        PUSH ECX
004DBFE1  8D 3C 96                  LEA EDI,[ESI + EDX*0x4]
004DBFE4  C7 07 64 00 00 00         MOV dword ptr [EDI],0x64
004DBFEA  8B 10                     MOV EDX,dword ptr [EAX]
004DBFEC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBFF2  52                        PUSH EDX
004DBFF3  E8 D8 A2 20 00            CALL 0x006e62d0
004DBFF8  85 C0                     TEST EAX,EAX
004DBFFA  0F 85 CE 00 00 00         JNZ 0x004dc0ce
004DC000  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DC003  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004DC006  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
004DC00C  3B CA                     CMP ECX,EDX
004DC00E  0F 85 BA 00 00 00         JNZ 0x004dc0ce
004DC014  8B 17                     MOV EDX,dword ptr [EDI]
004DC016  5F                        POP EDI
004DC017  89 90 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],EDX
004DC01D  5E                        POP ESI
004DC01E  33 C0                     XOR EAX,EAX
004DC020  5B                        POP EBX
004DC021  5D                        POP EBP
004DC022  C2 04 00                  RET 0x4
LAB_004dc025:
004DC025  C7 84 BE E8 04 00 00 01 00 00 00  MOV dword ptr [ESI + EDI*0x4 + 0x4e8],0x1
004DC030  8B 8C BE D0 04 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x4d0]
004DC037  8D 45 08                  LEA EAX,[EBP + 0x8]
004DC03A  50                        PUSH EAX
004DC03B  51                        PUSH ECX
004DC03C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DC042  E8 89 A2 20 00            CALL 0x006e62d0
004DC047  85 C0                     TEST EAX,EAX
004DC049  75 1D                     JNZ 0x004dc068
004DC04B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DC04E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004DC051  8B 90 C4 04 00 00         MOV EDX,dword ptr [EAX + 0x4c4]
004DC057  3B D1                     CMP EDX,ECX
004DC059  75 0D                     JNZ 0x004dc068
004DC05B  8B 8C BE E0 04 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x4e0]
004DC062  89 88 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],ECX
LAB_004dc068:
004DC068  BA 35 01 00 00            MOV EDX,0x135
004DC06D  2B D7                     SUB EDX,EDI
004DC06F  8B 0C 96                  MOV ECX,dword ptr [ESI + EDX*0x4]
004DC072  8D 04 96                  LEA EAX,[ESI + EDX*0x4]
004DC075  85 C9                     TEST ECX,ECX
004DC077  74 55                     JZ 0x004dc0ce
004DC079  B9 3B 01 00 00            MOV ECX,0x13b
004DC07E  2B CF                     SUB ECX,EDI
004DC080  83 3C 8E 00               CMP dword ptr [ESI + ECX*0x4],0x0
004DC084  74 48                     JZ 0x004dc0ce
004DC086  BA 39 01 00 00            MOV EDX,0x139
004DC08B  B9 64 00 00 00            MOV ECX,0x64
004DC090  2B D7                     SUB EDX,EDI
004DC092  8D 1C 96                  LEA EBX,[ESI + EDX*0x4]
004DC095  8B 94 BE E0 04 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x4e0]
004DC09C  2B CA                     SUB ECX,EDX
004DC09E  8D 55 08                  LEA EDX,[EBP + 0x8]
004DC0A1  89 0B                     MOV dword ptr [EBX],ECX
004DC0A3  8B 00                     MOV EAX,dword ptr [EAX]
004DC0A5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DC0AB  52                        PUSH EDX
004DC0AC  50                        PUSH EAX
004DC0AD  E8 1E A2 20 00            CALL 0x006e62d0
004DC0B2  85 C0                     TEST EAX,EAX
004DC0B4  75 18                     JNZ 0x004dc0ce
004DC0B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DC0B9  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004DC0BC  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
004DC0C2  3B CA                     CMP ECX,EDX
004DC0C4  75 08                     JNZ 0x004dc0ce
004DC0C6  8B 13                     MOV EDX,dword ptr [EBX]
004DC0C8  89 90 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],EDX
LAB_004dc0ce:
004DC0CE  5F                        POP EDI
004DC0CF  5E                        POP ESI
004DC0D0  33 C0                     XOR EAX,EAX
004DC0D2  5B                        POP EBX
004DC0D3  5D                        POP EBP
004DC0D4  C2 04 00                  RET 0x4
