FUN_00489950:
00489950  53                        PUSH EBX
00489951  8B D9                     MOV EBX,ECX
00489953  57                        PUSH EDI
00489954  33 FF                     XOR EDI,EDI
00489956  8A 83 81 02 00 00         MOV AL,byte ptr [EBX + 0x281]
0048995C  84 C0                     TEST AL,AL
0048995E  76 2A                     JBE 0x0048998a
00489960  56                        PUSH ESI
00489961  8D B3 82 02 00 00         LEA ESI,[EBX + 0x282]
LAB_00489967:
00489967  8B 06                     MOV EAX,dword ptr [ESI]
00489969  85 C0                     TEST EAX,EAX
0048996B  74 0C                     JZ 0x00489979
0048996D  50                        PUSH EAX
0048996E  E8 9D 47 22 00            CALL 0x006ae110
00489973  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00489979:
00489979  33 C0                     XOR EAX,EAX
0048997B  47                        INC EDI
0048997C  8A 83 81 02 00 00         MOV AL,byte ptr [EBX + 0x281]
00489982  83 C6 04                  ADD ESI,0x4
00489985  3B F8                     CMP EDI,EAX
00489987  7C DE                     JL 0x00489967
00489989  5E                        POP ESI
LAB_0048998a:
0048998A  5F                        POP EDI
0048998B  5B                        POP EBX
0048998C  C3                        RET
