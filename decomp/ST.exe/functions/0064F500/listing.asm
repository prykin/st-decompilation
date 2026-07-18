FUN_0064f500:
0064F500  55                        PUSH EBP
0064F501  8B EC                     MOV EBP,ESP
0064F503  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064F506  53                        PUSH EBX
0064F507  33 C9                     XOR ECX,ECX
0064F509  B3 08                     MOV BL,0x8
LAB_0064f50b:
0064F50B  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
0064F512  75 5E                     JNZ 0x0064f572
0064F514  41                        INC ECX
0064F515  83 F9 03                  CMP ECX,0x3
0064F518  7C F1                     JL 0x0064f50b
0064F51A  83 78 10 02               CMP dword ptr [EAX + 0x10],0x2
0064F51E  7E 05                     JLE 0x0064f525
0064F520  33 C0                     XOR EAX,EAX
0064F522  5B                        POP EBX
0064F523  5D                        POP EBP
0064F524  C3                        RET
LAB_0064f525:
0064F525  66 8B 08                  MOV CX,word ptr [EAX]
0064F528  83 CA FF                  OR EDX,0xffffffff
0064F52B  66 83 F9 04               CMP CX,0x4
0064F52F  7D 0E                     JGE 0x0064f53f
0064F531  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
LAB_0064f534:
0064F534  66 83 F9 05               CMP CX,0x5
0064F538  7D 12                     JGE 0x0064f54c
0064F53A  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0064F53D  EB 1A                     JMP 0x0064f559
LAB_0064f53f:
0064F53F  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
0064F545  74 ED                     JZ 0x0064f534
0064F547  33 C0                     XOR EAX,EAX
0064F549  5B                        POP EBX
0064F54A  5D                        POP EBP
0064F54B  C3                        RET
LAB_0064f54c:
0064F54C  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064F552  74 05                     JZ 0x0064f559
0064F554  33 C0                     XOR EAX,EAX
0064F556  5B                        POP EBX
0064F557  5D                        POP EBP
0064F558  C3                        RET
LAB_0064f559:
0064F559  66 83 F9 06               CMP CX,0x6
0064F55D  7D 0B                     JGE 0x0064f56a
0064F55F  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
LAB_0064f562:
0064F562  B8 01 00 00 00            MOV EAX,0x1
0064F567  5B                        POP EBX
0064F568  5D                        POP EBP
0064F569  C3                        RET
LAB_0064f56a:
0064F56A  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0064F570  74 F0                     JZ 0x0064f562
LAB_0064f572:
0064F572  33 C0                     XOR EAX,EAX
0064F574  5B                        POP EBX
0064F575  5D                        POP EBP
0064F576  C3                        RET
