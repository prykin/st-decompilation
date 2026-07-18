FUN_00719810:
00719810  55                        PUSH EBP
00719811  8B EC                     MOV EBP,ESP
00719813  83 EC 0C                  SUB ESP,0xc
00719816  33 C0                     XOR EAX,EAX
00719818  56                        PUSH ESI
00719819  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0071981C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071981F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719822  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00719825  85 C0                     TEST EAX,EAX
00719827  74 16                     JZ 0x0071983f
00719829  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071982C  8D 4D F4                  LEA ECX,[EBP + -0xc]
0071982F  51                        PUSH ECX
00719830  68 02 30 00 00            PUSH 0x3002
00719835  8B 16                     MOV EDX,dword ptr [ESI]
00719837  68 0D 08 00 00            PUSH 0x80d
0071983C  52                        PUSH EDX
0071983D  EB 14                     JMP 0x00719853
LAB_0071983f:
0071983F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719842  8D 45 F4                  LEA EAX,[EBP + -0xc]
00719845  50                        PUSH EAX
00719846  68 02 50 00 00            PUSH 0x5002
0071984B  8B 0E                     MOV ECX,dword ptr [ESI]
0071984D  68 0D 08 00 00            PUSH 0x80d
00719852  51                        PUSH ECX
LAB_00719853:
00719853  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719859  85 C0                     TEST EAX,EAX
0071985B  74 14                     JZ 0x00719871
0071985D  56                        PUSH ESI
0071985E  50                        PUSH EAX
0071985F  E8 2C 04 00 00            CALL 0x00719c90
00719864  83 C4 08                  ADD ESP,0x8
00719867  B8 01 00 00 00            MOV EAX,0x1
0071986C  5E                        POP ESI
0071986D  8B E5                     MOV ESP,EBP
0071986F  5D                        POP EBP
00719870  C3                        RET
LAB_00719871:
00719871  33 C0                     XOR EAX,EAX
00719873  5E                        POP ESI
00719874  8B E5                     MOV ESP,EBP
00719876  5D                        POP EBP
00719877  C3                        RET
