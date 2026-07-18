FUN_007176f0:
007176F0  55                        PUSH EBP
007176F1  8B EC                     MOV EBP,ESP
007176F3  53                        PUSH EBX
007176F4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007176F7  56                        PUSH ESI
007176F8  8B F1                     MOV ESI,ECX
007176FA  85 DB                     TEST EBX,EBX
007176FC  0F 84 46 01 00 00         JZ 0x00717848
00717702  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00717705  85 C0                     TEST EAX,EAX
00717707  0F 84 3B 01 00 00         JZ 0x00717848
0071770D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00717710  85 C0                     TEST EAX,EAX
00717712  0F 84 30 01 00 00         JZ 0x00717848
00717718  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0071771B  85 C0                     TEST EAX,EAX
0071771D  0F 84 25 01 00 00         JZ 0x00717848
00717723  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00717726  57                        PUSH EDI
00717727  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0071772A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0071772D  89 BE B2 04 00 00         MOV dword ptr [ESI + 0x4b2],EDI
00717733  0F AF F8                  IMUL EDI,EAX
00717736  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00717739  89 86 B6 04 00 00         MOV dword ptr [ESI + 0x4b6],EAX
0071773F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00717742  57                        PUSH EDI
00717743  50                        PUSH EAX
00717744  89 8E BE 04 00 00         MOV dword ptr [ESI + 0x4be],ECX
0071774A  89 96 C2 04 00 00         MOV dword ptr [ESI + 0x4c2],EDX
00717750  E8 FB 57 F9 FF            CALL 0x006acf50
00717755  8B D0                     MOV EDX,EAX
00717757  8B CF                     MOV ECX,EDI
00717759  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
0071775C  8B FA                     MOV EDI,EDX
0071775E  8B D1                     MOV EDX,ECX
00717760  33 C0                     XOR EAX,EAX
00717762  C1 E9 02                  SHR ECX,0x2
00717765  F3 AB                     STOSD.REP ES:EDI
00717767  8B CA                     MOV ECX,EDX
00717769  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0071776C  83 E1 03                  AND ECX,0x3
0071776F  F3 AA                     STOSB.REP ES:EDI
00717771  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00717774  89 96 CE 04 00 00         MOV dword ptr [ESI + 0x4ce],EDX
0071777A  89 86 CA 04 00 00         MOV dword ptr [ESI + 0x4ca],EAX
00717780  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00717783  89 86 D2 04 00 00         MOV dword ptr [ESI + 0x4d2],EAX
00717789  8B 86 C2 04 00 00         MOV EAX,dword ptr [ESI + 0x4c2]
0071778F  0F AF 86 BE 04 00 00      IMUL EAX,dword ptr [ESI + 0x4be]
00717796  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
00717799  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0071779C  83 C0 07                  ADD EAX,0x7
0071779F  89 96 DA 04 00 00         MOV dword ptr [ESI + 0x4da],EDX
007177A5  99                        CDQ
007177A6  83 E2 07                  AND EDX,0x7
007177A9  89 8E C6 04 00 00         MOV dword ptr [ESI + 0x4c6],ECX
007177AF  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
007177B2  03 C2                     ADD EAX,EDX
007177B4  C1 F8 03                  SAR EAX,0x3
007177B7  50                        PUSH EAX
007177B8  89 8E D6 04 00 00         MOV dword ptr [ESI + 0x4d6],ECX
007177BE  E8 4D 34 F9 FF            CALL 0x006aac10
007177C3  8B BE 4C 01 00 00         MOV EDI,dword ptr [ESI + 0x14c]
007177C9  8B 96 48 01 00 00         MOV EDX,dword ptr [ESI + 0x148]
007177CF  8B 8E 54 01 00 00         MOV ECX,dword ptr [ESI + 0x154]
007177D5  89 86 6E 04 00 00         MOV dword ptr [ESI + 0x46e],EAX
007177DB  8B 86 50 01 00 00         MOV EAX,dword ptr [ESI + 0x150]
007177E1  68 40 01 00 00            PUSH 0x140
007177E6  03 C7                     ADD EAX,EDI
007177E8  03 C2                     ADD EAX,EDX
007177EA  33 D2                     XOR EDX,EDX
007177EC  C1 E0 08                  SHL EAX,0x8
007177EF  8A 94 08 80 00 00 00      MOV DL,byte ptr [EAX + ECX*0x1 + 0x80]
007177F6  89 96 9E 04 00 00         MOV dword ptr [ESI + 0x49e],EDX
007177FC  E8 0F 34 F9 FF            CALL 0x006aac10
00717801  89 86 72 04 00 00         MOV dword ptr [ESI + 0x472],EAX
00717807  8B 0B                     MOV ECX,dword ptr [EBX]
00717809  8D 86 A2 04 00 00         LEA EAX,[ESI + 0x4a2]
0071780F  89 8E A2 04 00 00         MOV dword ptr [ESI + 0x4a2],ECX
00717815  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
00717818  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0071781B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0071781E  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00717821  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00717824  8B CE                     MOV ECX,ESI
00717826  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00717829  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0071782C  89 86 BA 04 00 00         MOV dword ptr [ESI + 0x4ba],EAX
00717832  C7 86 66 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x466],0x1
0071783C  E8 3F FB FF FF            CALL 0x00717380
00717841  5F                        POP EDI
00717842  5E                        POP ESI
00717843  5B                        POP EBX
00717844  5D                        POP EBP
00717845  C2 30 00                  RET 0x30
LAB_00717848:
00717848  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071784E  68 E9 00 00 00            PUSH 0xe9
00717853  68 D4 06 7F 00            PUSH 0x7f06d4
00717858  51                        PUSH ECX
00717859  6A CC                     PUSH -0x34
0071785B  E8 E0 E5 F8 FF            CALL 0x006a5e40
00717860  5E                        POP ESI
00717861  5B                        POP EBX
00717862  5D                        POP EBP
00717863  C2 30 00                  RET 0x30
