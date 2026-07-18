FUN_006513c0:
006513C0  55                        PUSH EBP
006513C1  8B EC                     MOV EBP,ESP
006513C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006513C6  53                        PUSH EBX
006513C7  33 C0                     XOR EAX,EAX
006513C9  BB 08 00 00 00            MOV EBX,0x8
LAB_006513ce:
006513CE  38 9C 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],BL
006513D5  0F 85 A6 00 00 00         JNZ 0x00651481
006513DB  40                        INC EAX
006513DC  83 F8 04                  CMP EAX,0x4
006513DF  7C ED                     JL 0x006513ce
006513E1  66 8B 11                  MOV DX,word ptr [ECX]
006513E4  B8 01 00 00 00            MOV EAX,0x1
006513E9  66 83 FA 05               CMP DX,0x5
006513ED  7D 05                     JGE 0x006513f4
006513EF  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
006513F2  EB 0C                     JMP 0x00651400
LAB_006513f4:
006513F4  38 99 D4 00 00 00         CMP byte ptr [ECX + 0xd4],BL
006513FA  0F 85 81 00 00 00         JNZ 0x00651481
LAB_00651400:
00651400  66 83 FA 06               CMP DX,0x6
00651404  7D 05                     JGE 0x0065140b
00651406  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00651409  EB 08                     JMP 0x00651413
LAB_0065140b:
0065140B  38 99 D5 00 00 00         CMP byte ptr [ECX + 0xd5],BL
00651411  75 6E                     JNZ 0x00651481
LAB_00651413:
00651413  66 83 FA 07               CMP DX,0x7
00651417  7D 09                     JGE 0x00651422
00651419  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
00651420  EB 08                     JMP 0x0065142a
LAB_00651422:
00651422  38 99 D6 00 00 00         CMP byte ptr [ECX + 0xd6],BL
00651428  75 57                     JNZ 0x00651481
LAB_0065142a:
0065142A  66 3B D3                  CMP DX,BX
0065142D  7D 05                     JGE 0x00651434
0065142F  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
00651432  EB 08                     JMP 0x0065143c
LAB_00651434:
00651434  38 99 D7 00 00 00         CMP byte ptr [ECX + 0xd7],BL
0065143A  75 45                     JNZ 0x00651481
LAB_0065143c:
0065143C  66 83 FA 09               CMP DX,0x9
00651440  7D 09                     JGE 0x0065144b
00651442  C7 41 28 00 00 00 00      MOV dword ptr [ECX + 0x28],0x0
00651449  EB 08                     JMP 0x00651453
LAB_0065144b:
0065144B  38 99 D8 00 00 00         CMP byte ptr [ECX + 0xd8],BL
00651451  75 2E                     JNZ 0x00651481
LAB_00651453:
00651453  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00651456  85 D2                     TEST EDX,EDX
00651458  7C 27                     JL 0x00651481
0065145A  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0065145D  85 D2                     TEST EDX,EDX
0065145F  7C 20                     JL 0x00651481
00651461  83 FA 02                  CMP EDX,0x2
00651464  7F 1B                     JG 0x00651481
00651466  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00651469  85 D2                     TEST EDX,EDX
0065146B  7C 14                     JL 0x00651481
0065146D  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
00651470  85 D2                     TEST EDX,EDX
00651472  7C 0D                     JL 0x00651481
00651474  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00651477  85 D2                     TEST EDX,EDX
00651479  7D 08                     JGE 0x00651483
0065147B  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
0065147E  5B                        POP EBX
0065147F  5D                        POP EBP
00651480  C3                        RET
LAB_00651481:
00651481  33 C0                     XOR EAX,EAX
LAB_00651483:
00651483  5B                        POP EBX
00651484  5D                        POP EBP
00651485  C3                        RET
