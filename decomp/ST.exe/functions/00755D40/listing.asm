FUN_00755d40:
00755D40  55                        PUSH EBP
00755D41  8B EC                     MOV EBP,ESP
00755D43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00755D46  53                        PUSH EBX
00755D47  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00755D4A  56                        PUSH ESI
00755D4B  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00755D4E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00755D51  57                        PUSH EDI
00755D52  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
00755D56  66 85 C9                  TEST CX,CX
00755D59  74 05                     JZ 0x00755d60
00755D5B  0F BF C1                  MOVSX EAX,CX
00755D5E  EB 08                     JMP 0x00755d68
LAB_00755d60:
00755D60  8D 4C 1E 18               LEA ECX,[ESI + EBX*0x1 + 0x18]
00755D64  51                        PUSH ECX
00755D65  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00755d68:
00755D68  0F BF 56 08               MOVSX EDX,word ptr [ESI + 0x8]
00755D6C  8D 78 08                  LEA EDI,[EAX + 0x8]
00755D6F  2B D7                     SUB EDX,EDI
00755D71  8D 04 37                  LEA EAX,[EDI + ESI*0x1]
00755D74  2B D3                     SUB EDX,EBX
00755D76  52                        PUSH EDX
00755D77  8D 54 1E 10               LEA EDX,[ESI + EBX*0x1 + 0x10]
00755D7B  8D 4C 18 10               LEA ECX,[EAX + EBX*0x1 + 0x10]
00755D7F  51                        PUSH ECX
00755D80  52                        PUSH EDX
00755D81  E8 EA 7C FD FF            CALL 0x0072da70
00755D86  83 C4 0C                  ADD ESP,0xc
00755D89  66 29 7E 08               SUB word ptr [ESI + 0x8],DI
00755D8D  5F                        POP EDI
00755D8E  5E                        POP ESI
00755D8F  5B                        POP EBX
00755D90  5D                        POP EBP
00755D91  C2 0C 00                  RET 0xc
