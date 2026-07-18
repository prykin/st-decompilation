FUN_0060d810:
0060D810  55                        PUSH EBP
0060D811  8B EC                     MOV EBP,ESP
0060D813  53                        PUSH EBX
0060D814  8B D9                     MOV EBX,ECX
0060D816  57                        PUSH EDI
0060D817  33 C0                     XOR EAX,EAX
0060D819  8B BB 44 02 00 00         MOV EDI,dword ptr [EBX + 0x244]
0060D81F  85 FF                     TEST EDI,EDI
0060D821  0F 84 CD 00 00 00         JZ 0x0060d8f4
0060D827  B9 0B 00 00 00            MOV ECX,0xb
0060D82C  56                        PUSH ESI
0060D82D  F3 AB                     STOSD.REP ES:EDI
0060D82F  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D835  68 CC 00 00 00            PUSH 0xcc
0060D83A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060D840  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D846  C7 41 04 33 00 00 00      MOV dword ptr [ECX + 0x4],0x33
0060D84D  E8 1E D4 09 00            CALL 0x006aac70
0060D852  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D858  B9 33 00 00 00            MOV ECX,0x33
0060D85D  BE 30 F7 7C 00            MOV ESI,0x7cf730
0060D862  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0060D865  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D86B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060D86E  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0060D871  F3 A5                     MOVSD.REP ES:EDI,ESI
0060D873  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D879  5E                        POP ESI
0060D87A  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
0060D87D  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D883  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060D886  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0060D889  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D88F  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
0060D895  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
0060D898  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D89E  C7 41 18 1E 00 00 00      MOV dword ptr [ECX + 0x18],0x1e
0060D8A5  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D8AB  C7 42 1C 7D 00 00 00      MOV dword ptr [EDX + 0x1c],0x7d
0060D8B2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060D8B8  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D8BE  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0060D8C4  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0060D8C7  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D8CD  B8 01 00 00 00            MOV EAX,0x1
0060D8D2  89 01                     MOV dword ptr [ECX],EAX
0060D8D4  8B 93 44 02 00 00         MOV EDX,dword ptr [EBX + 0x244]
0060D8DA  C7 42 24 14 00 00 00      MOV dword ptr [EDX + 0x24],0x14
0060D8E1  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D8E7  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
0060D8EE  89 83 40 02 00 00         MOV dword ptr [EBX + 0x240],EAX
LAB_0060d8f4:
0060D8F4  5F                        POP EDI
0060D8F5  5B                        POP EBX
0060D8F6  5D                        POP EBP
0060D8F7  C2 08 00                  RET 0x8
