FUN_0053d3b0:
0053D3B0  55                        PUSH EBP
0053D3B1  8B EC                     MOV EBP,ESP
0053D3B3  83 EC 50                  SUB ESP,0x50
0053D3B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D3BB  53                        PUSH EBX
0053D3BC  56                        PUSH ESI
0053D3BD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053D3C0  57                        PUSH EDI
0053D3C1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0053D3C4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053D3C7  6A 00                     PUSH 0x0
0053D3C9  52                        PUSH EDX
0053D3CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0053D3CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D3D3  E8 18 04 1F 00            CALL 0x0072d7f0
0053D3D8  8B F0                     MOV ESI,EAX
0053D3DA  83 C4 08                  ADD ESP,0x8
0053D3DD  85 F6                     TEST ESI,ESI
0053D3DF  75 61                     JNZ 0x0053d442
0053D3E1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053D3E4  8D 86 AB 01 00 00         LEA EAX,[ESI + 0x1ab]
0053D3EA  8B C8                     MOV ECX,EAX
0053D3EC  50                        PUSH EAX
0053D3ED  6A 12                     PUSH 0x12
0053D3EF  8B 11                     MOV EDX,dword ptr [ECX]
0053D3F1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053D3F4  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0053D3F8  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0053D3FC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0053D402  E8 B5 61 EC FF            CALL 0x004035bc
0053D407  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0053D40E  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
0053D414  BB 06 00 00 00            MOV EBX,0x6
LAB_0053d419:
0053D419  8B 07                     MOV EAX,dword ptr [EDI]
0053D41B  85 C0                     TEST EAX,EAX
0053D41D  74 0E                     JZ 0x0053d42d
0053D41F  8D 56 18                  LEA EDX,[ESI + 0x18]
0053D422  8B CE                     MOV ECX,ESI
0053D424  52                        PUSH EDX
0053D425  50                        PUSH EAX
0053D426  6A 02                     PUSH 0x2
0053D428  E8 53 8C 1A 00            CALL 0x006e6080
LAB_0053d42d:
0053D42D  83 C7 04                  ADD EDI,0x4
0053D430  4B                        DEC EBX
0053D431  75 E6                     JNZ 0x0053d419
0053D433  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053D436  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D43B  5F                        POP EDI
0053D43C  5E                        POP ESI
0053D43D  5B                        POP EBX
0053D43E  8B E5                     MOV ESP,EBP
0053D440  5D                        POP EBP
0053D441  C3                        RET
LAB_0053d442:
0053D442  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0053D445  68 3C 78 7C 00            PUSH 0x7c783c
0053D44A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D44F  56                        PUSH ESI
0053D450  6A 00                     PUSH 0x0
0053D452  6A 57                     PUSH 0x57
0053D454  68 98 77 7C 00            PUSH 0x7c7798
0053D459  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D45F  E8 6C 00 17 00            CALL 0x006ad4d0
0053D464  83 C4 18                  ADD ESP,0x18
0053D467  85 C0                     TEST EAX,EAX
0053D469  74 01                     JZ 0x0053d46c
0053D46B  CC                        INT3
LAB_0053d46c:
0053D46C  6A 57                     PUSH 0x57
0053D46E  68 98 77 7C 00            PUSH 0x7c7798
0053D473  6A 00                     PUSH 0x0
0053D475  56                        PUSH ESI
0053D476  E8 C5 89 16 00            CALL 0x006a5e40
0053D47B  5F                        POP EDI
0053D47C  5E                        POP ESI
0053D47D  5B                        POP EBX
0053D47E  8B E5                     MOV ESP,EBP
0053D480  5D                        POP EBP
0053D481  C3                        RET
