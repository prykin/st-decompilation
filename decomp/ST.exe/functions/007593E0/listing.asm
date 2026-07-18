FUN_007593e0:
007593E0  55                        PUSH EBP
007593E1  8B EC                     MOV EBP,ESP
007593E3  53                        PUSH EBX
007593E4  56                        PUSH ESI
007593E5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007593E8  57                        PUSH EDI
007593E9  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007593EC  8B 1E                     MOV EBX,dword ptr [ESI]
007593EE  81 FF F4 C9 9A 3B         CMP EDI,0x3b9ac9f4
007593F4  76 08                     JBE 0x007593fe
007593F6  6A 03                     PUSH 0x3
007593F8  56                        PUSH ESI
007593F9  E8 C2 FF FF FF            CALL 0x007593c0
LAB_007593fe:
007593FE  8B C7                     MOV EAX,EDI
00759400  83 E0 07                  AND EAX,0x7
00759403  76 09                     JBE 0x0075940e
00759405  B9 08 00 00 00            MOV ECX,0x8
0075940A  2B C8                     SUB ECX,EAX
0075940C  03 F9                     ADD EDI,ECX
LAB_0075940e:
0075940E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00759411  85 C0                     TEST EAX,EAX
00759413  7C 05                     JL 0x0075941a
00759415  83 F8 02                  CMP EAX,0x2
00759418  7C 18                     JL 0x00759432
LAB_0075941a:
0075941A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00759420  68 64 01 00 00            PUSH 0x164
00759425  68 C8 2D 7F 00            PUSH 0x7f2dc8
0075942A  52                        PUSH EDX
0075942B  6A 0C                     PUSH 0xc
0075942D  E8 0E CA F4 FF            CALL 0x006a5e40
LAB_00759432:
00759432  8D 47 0C                  LEA EAX,[EDI + 0xc]
00759435  50                        PUSH EAX
00759436  56                        PUSH ESI
00759437  E8 E4 6E 00 00            CALL 0x00760320
0075943C  8B F0                     MOV ESI,EAX
0075943E  85 F6                     TEST ESI,ESI
00759440  75 0B                     JNZ 0x0075944d
00759442  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00759445  6A 04                     PUSH 0x4
00759447  51                        PUSH ECX
00759448  E8 73 FF FF FF            CALL 0x007593c0
LAB_0075944d:
0075944D  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00759450  8D 57 0C                  LEA EDX,[EDI + 0xc]
00759453  03 C2                     ADD EAX,EDX
00759455  89 43 48                  MOV dword ptr [EBX + 0x48],EAX
00759458  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075945B  8B 4C 83 38               MOV ECX,dword ptr [EBX + EAX*0x4 + 0x38]
0075945F  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00759462  89 0E                     MOV dword ptr [ESI],ECX
00759464  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
0075946B  89 74 83 38               MOV dword ptr [EBX + EAX*0x4 + 0x38],ESI
0075946F  8D 46 0C                  LEA EAX,[ESI + 0xc]
00759472  5F                        POP EDI
00759473  5E                        POP ESI
00759474  5B                        POP EBX
00759475  5D                        POP EBP
00759476  C2 0C 00                  RET 0xc
