FUN_004c6210:
004C6210  55                        PUSH EBP
004C6211  8B EC                     MOV EBP,ESP
004C6213  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C6216  56                        PUSH ESI
004C6217  8B F1                     MOV ESI,ECX
004C6219  6A 40                     PUSH 0x40
004C621B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C621E  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
004C6225  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C6228  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
004C622B  E8 00 83 26 00            CALL 0x0072e530
004C6230  83 C4 04                  ADD ESP,0x4
004C6233  85 C0                     TEST EAX,EAX
004C6235  74 0B                     JZ 0x004c6242
004C6237  8B C8                     MOV ECX,EAX
004C6239  E8 D8 B0 F3 FF            CALL 0x00401316
004C623E  8B C8                     MOV ECX,EAX
004C6240  EB 02                     JMP 0x004c6244
LAB_004c6242:
004C6242  33 C9                     XOR ECX,ECX
LAB_004c6244:
004C6244  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C6247  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
004C624A  8B 04 95 68 1D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x791d68]
004C6251  83 E8 00                  SUB EAX,0x0
004C6254  74 5D                     JZ 0x004c62b3
004C6256  48                        DEC EAX
004C6257  0F 85 8C 00 00 00         JNZ 0x004c62e9
004C625D  A1 CC 73 80 00            MOV EAX,[0x008073cc]
004C6262  6A 11                     PUSH 0x11
004C6264  68 BE 00 00 00            PUSH 0xbe
004C6269  68 F0 00 00 00            PUSH 0xf0
004C626E  6A 00                     PUSH 0x0
004C6270  6A 56                     PUSH 0x56
004C6272  6A 78                     PUSH 0x78
004C6274  50                        PUSH EAX
004C6275  E8 01 F1 F3 FF            CALL 0x0040537b
004C627A  85 C0                     TEST EAX,EAX
004C627C  74 14                     JZ 0x004c6292
004C627E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C6284  6A 49                     PUSH 0x49
004C6286  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C628B  51                        PUSH ECX
004C628C  50                        PUSH EAX
004C628D  E8 AE FB 1D 00            CALL 0x006a5e40
LAB_004c6292:
004C6292  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6295  68 CD CC DC 40            PUSH 0x40dccccd
004C629A  6A 00                     PUSH 0x0
004C629C  6A 00                     PUSH 0x0
004C629E  6A 00                     PUSH 0x0
004C62A0  E8 27 F0 F3 FF            CALL 0x004052cc
004C62A5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004C62AB  50                        PUSH EAX
004C62AC  E8 5F 2F 22 00            CALL 0x006e9210
004C62B1  EB 36                     JMP 0x004c62e9
LAB_004c62b3:
004C62B3  8B 15 CC 73 80 00         MOV EDX,dword ptr [0x008073cc]
004C62B9  6A 11                     PUSH 0x11
004C62BB  68 8C 00 00 00            PUSH 0x8c
004C62C0  68 B4 00 00 00            PUSH 0xb4
004C62C5  6A 00                     PUSH 0x0
004C62C7  6A 45                     PUSH 0x45
004C62C9  6A 5A                     PUSH 0x5a
004C62CB  52                        PUSH EDX
004C62CC  E8 AA F0 F3 FF            CALL 0x0040537b
004C62D1  85 C0                     TEST EAX,EAX
004C62D3  74 14                     JZ 0x004c62e9
004C62D5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C62DB  6A 48                     PUSH 0x48
004C62DD  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C62E2  51                        PUSH ECX
004C62E3  50                        PUSH EAX
004C62E4  E8 57 FB 1D 00            CALL 0x006a5e40
LAB_004c62e9:
004C62E9  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C62EC  E8 9F C7 F3 FF            CALL 0x00402a90
004C62F1  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004C62F4  33 C0                     XOR EAX,EAX
004C62F6  6A 1D                     PUSH 0x1d
004C62F8  8A 82 2E 11 00 00         MOV AL,byte ptr [EDX + 0x112e]
004C62FE  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C6304  8B 0C 85 50 D2 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ad250]
004C630B  51                        PUSH ECX
004C630C  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C630F  52                        PUSH EDX
004C6310  6A 00                     PUSH 0x0
004C6312  E8 6C DE F3 FF            CALL 0x00404183
004C6317  85 C0                     TEST EAX,EAX
004C6319  74 14                     JZ 0x004c632f
004C631B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C6321  6A 4C                     PUSH 0x4c
004C6323  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6328  51                        PUSH ECX
004C6329  50                        PUSH EAX
004C632A  E8 11 FB 1D 00            CALL 0x006a5e40
LAB_004c632f:
004C632F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C6332  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6335  6A 00                     PUSH 0x0
004C6337  8B 04 95 84 0F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x790f84]
004C633E  50                        PUSH EAX
004C633F  50                        PUSH EAX
004C6340  6A 00                     PUSH 0x0
004C6342  E8 73 BB F3 FF            CALL 0x00401eba
004C6347  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C634A  8B 0C 85 84 0F 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x790f84]
004C6351  51                        PUSH ECX
004C6352  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6355  6A 00                     PUSH 0x0
004C6357  E8 08 AD F3 FF            CALL 0x00401064
004C635C  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004C635F  E8 4C EE 21 00            CALL 0x006e51b0
004C6364  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6367  50                        PUSH EAX
004C6368  6A 00                     PUSH 0x0
004C636A  E8 D1 EE F3 FF            CALL 0x00405240
004C636F  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6372  E8 98 D9 F3 FF            CALL 0x00403d0f
004C6377  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
004C637E  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
004C6385  33 C0                     XOR EAX,EAX
004C6387  5E                        POP ESI
004C6388  5D                        POP EBP
004C6389  C2 08 00                  RET 0x8
