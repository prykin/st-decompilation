FUN_00675dc0:
00675DC0  55                        PUSH EBP
00675DC1  8B EC                     MOV EBP,ESP
00675DC3  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
00675DC8  57                        PUSH EDI
00675DC9  85 C0                     TEST EAX,EAX
00675DCB  0F 84 90 00 00 00         JZ 0x00675e61
00675DD1  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00675DD4  85 FF                     TEST EDI,EDI
00675DD6  0F 84 85 00 00 00         JZ 0x00675e61
00675DDC  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00675DDF  85 C0                     TEST EAX,EAX
00675DE1  76 7E                     JBE 0x00675e61
00675DE3  53                        PUSH EBX
00675DE4  33 DB                     XOR EBX,EBX
00675DE6  85 C0                     TEST EAX,EAX
00675DE8  76 62                     JBE 0x00675e4c
00675DEA  33 C9                     XOR ECX,ECX
00675DEC  56                        PUSH ESI
00675DED  3B C8                     CMP ECX,EAX
00675DEF  73 0B                     JNC 0x00675dfc
LAB_00675df1:
00675DF1  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00675DF4  0F AF C1                  IMUL EAX,ECX
00675DF7  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00675DFA  EB 02                     JMP 0x00675dfe
LAB_00675dfc:
00675DFC  33 C0                     XOR EAX,EAX
LAB_00675dfe:
00675DFE  66 8B 00                  MOV AX,word ptr [EAX]
00675E01  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00675E04  6A 01                     PUSH 0x1
00675E06  50                        PUSH EAX
00675E07  51                        PUSH ECX
00675E08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00675E0E  E8 A7 CA D8 FF            CALL 0x004028ba
00675E13  8B F0                     MOV ESI,EAX
00675E15  85 F6                     TEST ESI,ESI
00675E17  74 22                     JZ 0x00675e3b
00675E19  8B 16                     MOV EDX,dword ptr [ESI]
00675E1B  8B CE                     MOV ECX,ESI
00675E1D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00675E20  83 F8 78                  CMP EAX,0x78
00675E23  75 16                     JNZ 0x00675e3b
00675E25  8B 06                     MOV EAX,dword ptr [ESI]
00675E27  8B CE                     MOV ECX,ESI
00675E29  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00675E2C  83 F8 78                  CMP EAX,0x78
00675E2F  75 0A                     JNZ 0x00675e3b
00675E31  C7 86 69 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x269],0xffffffff
LAB_00675e3b:
00675E3B  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00675E3E  43                        INC EBX
00675E3F  8B CB                     MOV ECX,EBX
00675E41  81 E1 FF FF 00 00         AND ECX,0xffff
00675E47  3B C8                     CMP ECX,EAX
00675E49  72 A6                     JC 0x00675df1
00675E4B  5E                        POP ESI
LAB_00675e4c:
00675E4C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00675E4F  6A 00                     PUSH 0x0
00675E51  57                        PUSH EDI
00675E52  6A 00                     PUSH 0x0
00675E54  51                        PUSH ECX
00675E55  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00675E5B  E8 2F B9 D8 FF            CALL 0x0040178f
00675E60  5B                        POP EBX
LAB_00675e61:
00675E61  5F                        POP EDI
00675E62  5D                        POP EBP
00675E63  C3                        RET
