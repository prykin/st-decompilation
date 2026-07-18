cMf32::Flush:
006F1220  55                        PUSH EBP
006F1221  8B EC                     MOV EBP,ESP
006F1223  83 EC 48                  SUB ESP,0x48
006F1226  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F122B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F122E  56                        PUSH ESI
006F122F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F1232  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F1235  6A 00                     PUSH 0x0
006F1237  52                        PUSH EDX
006F1238  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F123B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1241  E8 AA C5 03 00            CALL 0x0072d7f0
006F1246  8B F0                     MOV ESI,EAX
006F1248  83 C4 08                  ADD ESP,0x8
006F124B  85 F6                     TEST ESI,ESI
006F124D  75 19                     JNZ 0x006f1268
006F124F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1252  8B 08                     MOV ECX,dword ptr [EAX]
006F1254  51                        PUSH ECX
006F1255  E8 B6 FC 05 00            CALL 0x00750f10
006F125A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F125D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F1263  5E                        POP ESI
006F1264  8B E5                     MOV ESP,EBP
006F1266  5D                        POP EBP
006F1267  C3                        RET
LAB_006f1268:
006F1268  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F126B  68 CC FA 7E 00            PUSH 0x7efacc
006F1270  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F1275  56                        PUSH ESI
006F1276  6A 00                     PUSH 0x0
006F1278  68 9A 00 00 00            PUSH 0x9a
006F127D  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1282  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1287  E8 44 C2 FB FF            CALL 0x006ad4d0
006F128C  83 C4 18                  ADD ESP,0x18
006F128F  85 C0                     TEST EAX,EAX
006F1291  74 01                     JZ 0x006f1294
006F1293  CC                        INT3
LAB_006f1294:
006F1294  68 9C 00 00 00            PUSH 0x9c
006F1299  68 A4 FA 7E 00            PUSH 0x7efaa4
006F129E  6A 00                     PUSH 0x0
006F12A0  56                        PUSH ESI
006F12A1  E8 9A 4B FB FF            CALL 0x006a5e40
006F12A6  8B C6                     MOV EAX,ESI
006F12A8  5E                        POP ESI
006F12A9  8B E5                     MOV ESP,EBP
006F12AB  5D                        POP EBP
006F12AC  C3                        RET
