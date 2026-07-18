FUN_004ce0f0:
004CE0F0  55                        PUSH EBP
004CE0F1  8B EC                     MOV EBP,ESP
004CE0F3  83 EC 34                  SUB ESP,0x34
004CE0F6  53                        PUSH EBX
004CE0F7  56                        PUSH ESI
004CE0F8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004CE0FB  8B D9                     MOV EBX,ECX
004CE0FD  83 3E 00                  CMP dword ptr [ESI],0x0
004CE100  75 0F                     JNZ 0x004ce111
004CE102  6A 05                     PUSH 0x5
004CE104  6A 30                     PUSH 0x30
004CE106  6A 05                     PUSH 0x5
004CE108  6A 00                     PUSH 0x0
004CE10A  E8 81 01 1E 00            CALL 0x006ae290
004CE10F  89 06                     MOV dword ptr [ESI],EAX
LAB_004ce111:
004CE111  8B 06                     MOV EAX,dword ptr [ESI]
004CE113  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
004CE11A  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004CE120  83 F8 53                  CMP EAX,0x53
004CE123  0F 85 CD 00 00 00         JNZ 0x004ce1f6
004CE129  57                        PUSH EDI
004CE12A  C7 45 FC 54 00 00 00      MOV dword ptr [EBP + -0x4],0x54
004CE131  BE FC 00 00 00            MOV ESI,0xfc
LAB_004ce136:
004CE136  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CE139  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004CE13C  83 C1 CE                  ADD ECX,-0x32
004CE13F  51                        PUSH ECX
004CE140  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CE146  52                        PUSH EDX
004CE147  E8 D1 75 F3 FF            CALL 0x0040571d
004CE14C  85 C0                     TEST EAX,EAX
004CE14E  0F 84 8B 00 00 00         JZ 0x004ce1df
004CE154  B9 0C 00 00 00            MOV ECX,0xc
004CE159  33 C0                     XOR EAX,EAX
004CE15B  8D 7D CC                  LEA EDI,[EBP + -0x34]
004CE15E  F3 AB                     STOSD.REP ES:EDI
004CE160  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004CE163  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CE166  51                        PUSH ECX
004CE167  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CE16D  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
004CE170  C6 45 D4 01               MOV byte ptr [EBP + -0x2c],0x1
004CE174  E8 3E 68 F3 FF            CALL 0x004049b7
004CE179  25 FF 00 00 00            AND EAX,0xff
004CE17E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CE184  03 C6                     ADD EAX,ESI
004CE186  66 8B 14 85 50 43 85 00   MOV DX,word ptr [EAX*0x4 + 0x854350]
004CE18E  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004CE191  50                        PUSH EAX
004CE192  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
004CE196  E8 1C 68 F3 FF            CALL 0x004049b7
004CE19B  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004CE19E  25 FF 00 00 00            AND EAX,0xff
004CE1A3  03 C6                     ADD EAX,ESI
004CE1A5  52                        PUSH EDX
004CE1A6  66 8B 0C 85 F4 19 7E 00   MOV CX,word ptr [EAX*0x4 + 0x7e19f4]
004CE1AE  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
004CE1B2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CE1B8  E8 FA 67 F3 FF            CALL 0x004049b7
004CE1BD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CE1C0  25 FF 00 00 00            AND EAX,0xff
004CE1C5  03 C6                     ADD EAX,ESI
004CE1C7  8D 4D CC                  LEA ECX,[EBP + -0x34]
004CE1CA  51                        PUSH ECX
004CE1CB  66 8B 04 85 04 2F 7E 00   MOV AX,word ptr [EAX*0x4 + 0x7e2f04]
004CE1D3  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
004CE1D7  8B 02                     MOV EAX,dword ptr [EDX]
004CE1D9  50                        PUSH EAX
004CE1DA  E8 E1 FF 1D 00            CALL 0x006ae1c0
LAB_004ce1df:
004CE1DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004CE1E2  83 C6 03                  ADD ESI,0x3
004CE1E5  42                        INC EDX
004CE1E6  81 FE 0E 01 00 00         CMP ESI,0x10e
004CE1EC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004CE1EF  0F 8E 41 FF FF FF         JLE 0x004ce136
004CE1F5  5F                        POP EDI
LAB_004ce1f6:
004CE1F6  5E                        POP ESI
004CE1F7  5B                        POP EBX
004CE1F8  8B E5                     MOV ESP,EBP
004CE1FA  5D                        POP EBP
004CE1FB  C2 04 00                  RET 0x4
