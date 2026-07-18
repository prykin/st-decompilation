FUN_0072ed00:
0072ED00  55                        PUSH EBP
0072ED01  8B EC                     MOV EBP,ESP
0072ED03  68 B6 00 00 00            PUSH 0xb6
0072ED08  68 84 FE 79 00            PUSH 0x79fe84
0072ED0D  6A 02                     PUSH 0x2
0072ED0F  68 80 00 00 00            PUSH 0x80
0072ED14  E8 EB 23 CD FF            CALL 0x00401104
0072ED19  83 C4 10                  ADD ESP,0x10
0072ED1C  A3 F4 A5 85 00            MOV [0x0085a5f4],EAX
0072ED21  83 3D F4 A5 85 00 00      CMP dword ptr [0x0085a5f4],0x0
0072ED28  75 0A                     JNZ 0x0072ed34
0072ED2A  6A 18                     PUSH 0x18
0072ED2C  E8 1F 4B 00 00            CALL 0x00733850
0072ED31  83 C4 04                  ADD ESP,0x4
LAB_0072ed34:
0072ED34  A1 F4 A5 85 00            MOV EAX,[0x0085a5f4]
0072ED39  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0072ED3F  8B 0D F4 A5 85 00         MOV ECX,dword ptr [0x0085a5f4]
0072ED45  89 0D F0 A5 85 00         MOV dword ptr [0x0085a5f0],ECX
0072ED4B  5D                        POP EBP
0072ED4C  C3                        RET
