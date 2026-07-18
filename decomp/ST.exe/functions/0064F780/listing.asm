FUN_0064f780:
0064F780  55                        PUSH EBP
0064F781  8B EC                     MOV EBP,ESP
0064F783  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064F786  53                        PUSH EBX
0064F787  33 C9                     XOR ECX,ECX
0064F789  BB 08 00 00 00            MOV EBX,0x8
LAB_0064f78e:
0064F78E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
0064F795  0F 85 07 01 00 00         JNZ 0x0064f8a2
0064F79B  41                        INC ECX
0064F79C  83 F9 03                  CMP ECX,0x3
0064F79F  7C ED                     JL 0x0064f78e
0064F7A1  66 8B 08                  MOV CX,word ptr [EAX]
0064F7A4  83 CA FF                  OR EDX,0xffffffff
0064F7A7  66 83 F9 04               CMP CX,0x4
0064F7AB  7D 0E                     JGE 0x0064f7bb
0064F7AD  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
LAB_0064f7b0:
0064F7B0  66 83 F9 05               CMP CX,0x5
0064F7B4  7D 12                     JGE 0x0064f7c8
0064F7B6  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0064F7B9  EB 1A                     JMP 0x0064f7d5
LAB_0064f7bb:
0064F7BB  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
0064F7C1  74 ED                     JZ 0x0064f7b0
0064F7C3  33 C0                     XOR EAX,EAX
0064F7C5  5B                        POP EBX
0064F7C6  5D                        POP EBP
0064F7C7  C3                        RET
LAB_0064f7c8:
0064F7C8  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064F7CE  74 05                     JZ 0x0064f7d5
0064F7D0  33 C0                     XOR EAX,EAX
0064F7D2  5B                        POP EBX
0064F7D3  5D                        POP EBP
0064F7D4  C3                        RET
LAB_0064f7d5:
0064F7D5  66 83 F9 06               CMP CX,0x6
0064F7D9  7D 0E                     JGE 0x0064f7e9
0064F7DB  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
LAB_0064f7de:
0064F7DE  66 83 F9 07               CMP CX,0x7
0064F7E2  7D 12                     JGE 0x0064f7f6
0064F7E4  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0064F7E7  EB 1A                     JMP 0x0064f803
LAB_0064f7e9:
0064F7E9  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0064F7EF  74 ED                     JZ 0x0064f7de
0064F7F1  33 C0                     XOR EAX,EAX
0064F7F3  5B                        POP EBX
0064F7F4  5D                        POP EBP
0064F7F5  C3                        RET
LAB_0064f7f6:
0064F7F6  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0064F7FC  74 05                     JZ 0x0064f803
0064F7FE  33 C0                     XOR EAX,EAX
0064F800  5B                        POP EBX
0064F801  5D                        POP EBP
0064F802  C3                        RET
LAB_0064f803:
0064F803  66 3B CB                  CMP CX,BX
0064F806  7D 12                     JGE 0x0064f81a
0064F808  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
LAB_0064f80f:
0064F80F  66 83 F9 09               CMP CX,0x9
0064F813  7D 13                     JGE 0x0064f828
0064F815  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0064F818  EB 1B                     JMP 0x0064f835
LAB_0064f81a:
0064F81A  80 B8 D7 00 00 00 0A      CMP byte ptr [EAX + 0xd7],0xa
0064F821  74 EC                     JZ 0x0064f80f
0064F823  33 C0                     XOR EAX,EAX
0064F825  5B                        POP EBX
0064F826  5D                        POP EBP
0064F827  C3                        RET
LAB_0064f828:
0064F828  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
0064F82E  74 05                     JZ 0x0064f835
0064F830  33 C0                     XOR EAX,EAX
0064F832  5B                        POP EBX
0064F833  5D                        POP EBP
0064F834  C3                        RET
LAB_0064f835:
0064F835  66 83 F9 0A               CMP CX,0xa
0064F839  7D 16                     JGE 0x0064f851
0064F83B  C7 40 2C 64 00 00 00      MOV dword ptr [EAX + 0x2c],0x64
LAB_0064f842:
0064F842  66 83 F9 0B               CMP CX,0xb
0064F846  7D 16                     JGE 0x0064f85e
0064F848  C7 40 30 01 00 00 00      MOV dword ptr [EAX + 0x30],0x1
0064F84F  EB 1A                     JMP 0x0064f86b
LAB_0064f851:
0064F851  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
0064F857  74 E9                     JZ 0x0064f842
0064F859  33 C0                     XOR EAX,EAX
0064F85B  5B                        POP EBX
0064F85C  5D                        POP EBP
0064F85D  C3                        RET
LAB_0064f85e:
0064F85E  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
0064F864  74 05                     JZ 0x0064f86b
0064F866  33 C0                     XOR EAX,EAX
0064F868  5B                        POP EBX
0064F869  5D                        POP EBP
0064F86A  C3                        RET
LAB_0064f86b:
0064F86B  66 83 F9 0C               CMP CX,0xc
0064F86F  7D 1C                     JGE 0x0064f88d
0064F871  C7 40 34 00 00 00 00      MOV dword ptr [EAX + 0x34],0x0
LAB_0064f878:
0064F878  66 83 F9 0D               CMP CX,0xd
0064F87C  7D 1C                     JGE 0x0064f89a
0064F87E  C7 40 38 00 00 00 00      MOV dword ptr [EAX + 0x38],0x0
0064F885  B8 01 00 00 00            MOV EAX,0x1
0064F88A  5B                        POP EBX
0064F88B  5D                        POP EBP
0064F88C  C3                        RET
LAB_0064f88d:
0064F88D  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
0064F893  74 E3                     JZ 0x0064f878
0064F895  33 C0                     XOR EAX,EAX
0064F897  5B                        POP EBX
0064F898  5D                        POP EBP
0064F899  C3                        RET
LAB_0064f89a:
0064F89A  38 98 DC 00 00 00         CMP byte ptr [EAX + 0xdc],BL
0064F8A0  74 05                     JZ 0x0064f8a7
LAB_0064f8a2:
0064F8A2  33 C0                     XOR EAX,EAX
0064F8A4  5B                        POP EBX
0064F8A5  5D                        POP EBP
0064F8A6  C3                        RET
LAB_0064f8a7:
0064F8A7  B8 01 00 00 00            MOV EAX,0x1
0064F8AC  5B                        POP EBX
0064F8AD  5D                        POP EBP
0064F8AE  C3                        RET
