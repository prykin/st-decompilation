FUN_006a1100:
006A1100  55                        PUSH EBP
006A1101  8B EC                     MOV EBP,ESP
006A1103  83 EC 08                  SUB ESP,0x8
006A1106  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1109  53                        PUSH EBX
006A110A  56                        PUSH ESI
006A110B  57                        PUSH EDI
006A110C  85 C9                     TEST ECX,ECX
006A110E  0F 8C 0E 01 00 00         JL 0x006a1222
006A1114  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1117  3B 08                     CMP ECX,dword ptr [EAX]
006A1119  0F 8D 03 01 00 00         JGE 0x006a1222
006A111F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A1122  85 DB                     TEST EBX,EBX
006A1124  0F 8C F8 00 00 00         JL 0x006a1222
006A112A  3B 58 04                  CMP EBX,dword ptr [EAX + 0x4]
006A112D  0F 8D EF 00 00 00         JGE 0x006a1222
006A1133  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A1136  85 FF                     TEST EDI,EDI
006A1138  0F 8C E4 00 00 00         JL 0x006a1222
006A113E  83 FF 06                  CMP EDI,0x6
006A1141  0F 8D DB 00 00 00         JGE 0x006a1222
006A1147  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A114A  56                        PUSH ESI
006A114B  57                        PUSH EDI
006A114C  53                        PUSH EBX
006A114D  51                        PUSH ECX
006A114E  50                        PUSH EAX
006A114F  E8 5C 08 D6 FF            CALL 0x004019b0
006A1154  83 C4 14                  ADD ESP,0x14
006A1157  85 C0                     TEST EAX,EAX
006A1159  75 07                     JNZ 0x006a1162
006A115B  5F                        POP EDI
006A115C  5E                        POP ESI
006A115D  5B                        POP EBX
006A115E  8B E5                     MOV ESP,EBP
006A1160  5D                        POP EBP
006A1161  C3                        RET
LAB_006a1162:
006A1162  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1165  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A1168  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A116B  50                        PUSH EAX
006A116C  57                        PUSH EDI
006A116D  53                        PUSH EBX
006A116E  51                        PUSH ECX
006A116F  52                        PUSH EDX
006A1170  E8 D7 2F D6 FF            CALL 0x0040414c
006A1175  0F BF C0                  MOVSX EAX,AX
006A1178  83 C4 14                  ADD ESP,0x14
006A117B  81 FE FF 00 00 00         CMP ESI,0xff
006A1181  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006A1184  74 15                     JZ 0x006a119b
006A1186  83 FE 01                  CMP ESI,0x1
006A1189  75 08                     JNZ 0x006a1193
006A118B  8A 4D FA                  MOV CL,byte ptr [EBP + -0x6]
006A118E  88 4D 13                  MOV byte ptr [EBP + 0x13],CL
006A1191  EB 0E                     JMP 0x006a11a1
LAB_006a1193:
006A1193  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
006A1196  88 55 13                  MOV byte ptr [EBP + 0x13],DL
006A1199  EB 06                     JMP 0x006a11a1
LAB_006a119b:
006A119B  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
006A119E  88 45 13                  MOV byte ptr [EBP + 0x13],AL
LAB_006a11a1:
006A11A1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A11A4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A11A7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A11AA  51                        PUSH ECX
006A11AB  56                        PUSH ESI
006A11AC  57                        PUSH EDI
006A11AD  53                        PUSH EBX
006A11AE  52                        PUSH EDX
006A11AF  50                        PUSH EAX
006A11B0  E8 9F 31 D6 FF            CALL 0x00404354
006A11B5  83 C4 18                  ADD ESP,0x18
006A11B8  66 3D FF FF               CMP AX,0xffff
006A11BC  75 09                     JNZ 0x006a11c7
006A11BE  5F                        POP EDI
006A11BF  5E                        POP ESI
006A11C0  33 C0                     XOR EAX,EAX
006A11C2  5B                        POP EBX
006A11C3  8B E5                     MOV ESP,EBP
006A11C5  5D                        POP EBP
006A11C6  C3                        RET
LAB_006a11c7:
006A11C7  8A 4D 13                  MOV CL,byte ptr [EBP + 0x13]
006A11CA  84 C9                     TEST CL,CL
006A11CC  75 11                     JNZ 0x006a11df
006A11CE  33 C9                     XOR ECX,ECX
006A11D0  5F                        POP EDI
006A11D1  66 85 C0                  TEST AX,AX
006A11D4  0F 94 C1                  SETZ CL
006A11D7  5E                        POP ESI
006A11D8  8B C1                     MOV EAX,ECX
006A11DA  5B                        POP EBX
006A11DB  8B E5                     MOV ESP,EBP
006A11DD  5D                        POP EBP
006A11DE  C3                        RET
LAB_006a11df:
006A11DF  39 7D 14                  CMP dword ptr [EBP + 0x14],EDI
006A11E2  74 09                     JZ 0x006a11ed
006A11E4  5F                        POP EDI
006A11E5  5E                        POP ESI
006A11E6  33 C0                     XOR EAX,EAX
006A11E8  5B                        POP EBX
006A11E9  8B E5                     MOV ESP,EBP
006A11EB  5D                        POP EBP
006A11EC  C3                        RET
LAB_006a11ed:
006A11ED  50                        PUSH EAX
006A11EE  E8 D8 0A D6 FF            CALL 0x00401ccb
006A11F3  83 C4 04                  ADD ESP,0x4
006A11F6  66 3D FF FF               CMP AX,0xffff
006A11FA  75 09                     JNZ 0x006a1205
006A11FC  5F                        POP EDI
006A11FD  5E                        POP ESI
006A11FE  33 C0                     XOR EAX,EAX
006A1200  5B                        POP EBX
006A1201  8B E5                     MOV ESP,EBP
006A1203  5D                        POP EBP
006A1204  C3                        RET
LAB_006a1205:
006A1205  81 FE FF 00 00 00         CMP ESI,0xff
006A120B  74 21                     JZ 0x006a122e
006A120D  8B 4D FA                  MOV ECX,dword ptr [EBP + -0x6]
006A1210  83 FE 01                  CMP ESI,0x1
006A1213  74 03                     JZ 0x006a1218
006A1215  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006a1218:
006A1218  0F BF D0                  MOVSX EDX,AX
006A121B  83 E1 0F                  AND ECX,0xf
006A121E  3B D1                     CMP EDX,ECX
006A1220  75 17                     JNZ 0x006a1239
LAB_006a1222:
006A1222  5F                        POP EDI
006A1223  5E                        POP ESI
006A1224  B8 01 00 00 00            MOV EAX,0x1
006A1229  5B                        POP EBX
006A122A  8B E5                     MOV ESP,EBP
006A122C  5D                        POP EBP
006A122D  C3                        RET
LAB_006a122e:
006A122E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A1231  83 E1 0F                  AND ECX,0xf
006A1234  66 3B C1                  CMP AX,CX
006A1237  74 E9                     JZ 0x006a1222
LAB_006a1239:
006A1239  5F                        POP EDI
006A123A  5E                        POP ESI
006A123B  33 C0                     XOR EAX,EAX
006A123D  5B                        POP EBX
006A123E  8B E5                     MOV ESP,EBP
006A1240  5D                        POP EBP
006A1241  C3                        RET
