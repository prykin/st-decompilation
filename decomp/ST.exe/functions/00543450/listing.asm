FUN_00543450:
00543450  53                        PUSH EBX
00543451  56                        PUSH ESI
00543452  68 FB 04 00 00            PUSH 0x4fb
00543457  E8 74 D0 16 00            CALL 0x006b04d0
0054345C  8B F0                     MOV ESI,EAX
0054345E  33 DB                     XOR EBX,EBX
00543460  3B F3                     CMP ESI,EBX
00543462  0F 84 27 01 00 00         JZ 0x0054358f
00543468  57                        PUSH EDI
00543469  8B CE                     MOV ECX,ESI
0054346B  E8 40 2B 1A 00            CALL 0x006e5fb0
00543470  8D 7E 18                  LEA EDI,[ESI + 0x18]
00543473  8B CF                     MOV ECX,EDI
00543475  E8 A6 23 1D 00            CALL 0x00715820
0054347A  8D 8E D3 00 00 00         LEA ECX,[ESI + 0xd3]
00543480  33 C0                     XOR EAX,EAX
00543482  C7 06 04 AE 79 00         MOV dword ptr [ESI],0x79ae04
00543488  C7 07 F4 AD 79 00         MOV dword ptr [EDI],0x79adf4
0054348E  89 9E AD 00 00 00         MOV dword ptr [ESI + 0xad],EBX
00543494  89 9E CD 00 00 00         MOV dword ptr [ESI + 0xcd],EBX
0054349A  88 9E D2 00 00 00         MOV byte ptr [ESI + 0xd2],BL
005434A0  89 01                     MOV dword ptr [ECX],EAX
005434A2  8D BE DE 00 00 00         LEA EDI,[ESI + 0xde]
005434A8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005434AB  66 89 41 08               MOV word ptr [ECX + 0x8],AX
005434AF  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
005434B2  B9 ED 00 00 00            MOV ECX,0xed
005434B7  F3 AB                     STOSD.REP ES:EDI
005434B9  AA                        STOSB ES:EDI
005434BA  83 CF FF                  OR EDI,0xffffffff
005434BD  89 9E 96 04 00 00         MOV dword ptr [ESI + 0x496],EBX
005434C3  89 9E C1 00 00 00         MOV dword ptr [ESI + 0xc1],EBX
005434C9  88 9E 93 04 00 00         MOV byte ptr [ESI + 0x493],BL
005434CF  66 89 9E 94 04 00 00      MOV word ptr [ESI + 0x494],BX
005434D6  89 9E 9A 04 00 00         MOV dword ptr [ESI + 0x49a],EBX
005434DC  89 9E 9E 04 00 00         MOV dword ptr [ESI + 0x49e],EBX
005434E2  89 9E A2 04 00 00         MOV dword ptr [ESI + 0x4a2],EBX
005434E8  89 9E A6 04 00 00         MOV dword ptr [ESI + 0x4a6],EBX
005434EE  89 9E AE 04 00 00         MOV dword ptr [ESI + 0x4ae],EBX
005434F4  89 BE 0B 01 00 00         MOV dword ptr [ESI + 0x10b],EDI
005434FA  33 C9                     XOR ECX,ECX
005434FC  8D 86 1B 01 00 00         LEA EAX,[ESI + 0x11b]
LAB_00543502:
00543502  BA FF F0 FF F0            MOV EDX,0xf0fff0ff
00543507  89 78 FC                  MOV dword ptr [EAX + -0x4],EDI
0054350A  D3 C2                     ROL EDX,CL
0054350C  83 C0 1C                  ADD EAX,0x1c
0054350F  89 50 E4                  MOV dword ptr [EAX + -0x1c],EDX
00543512  BA F0 FF F0 FF            MOV EDX,0xfff0fff0
00543517  D3 C2                     ROL EDX,CL
00543519  89 50 E8                  MOV dword ptr [EAX + -0x18],EDX
0054351C  89 50 EC                  MOV dword ptr [EAX + -0x14],EDX
0054351F  BA F0 FF F0 FF            MOV EDX,0xfff0fff0
00543524  D3 CA                     ROR EDX,CL
00543526  41                        INC ECX
00543527  83 F9 20                  CMP ECX,0x20
0054352A  89 50 F0                  MOV dword ptr [EAX + -0x10],EDX
0054352D  C7 40 F4 02 00 00 00      MOV dword ptr [EAX + -0xc],0x2
00543534  7C CC                     JL 0x00543502
00543536  89 BE D6 04 00 00         MOV dword ptr [ESI + 0x4d6],EDI
0054353C  89 9E CE 04 00 00         MOV dword ptr [ESI + 0x4ce],EBX
00543542  89 9E CA 04 00 00         MOV dword ptr [ESI + 0x4ca],EBX
00543548  89 9E C6 04 00 00         MOV dword ptr [ESI + 0x4c6],EBX
0054354E  89 9E C2 04 00 00         MOV dword ptr [ESI + 0x4c2],EBX
00543554  89 9E D2 04 00 00         MOV dword ptr [ESI + 0x4d2],EBX
0054355A  89 9E DA 04 00 00         MOV dword ptr [ESI + 0x4da],EBX
00543560  88 9E DE 04 00 00         MOV byte ptr [ESI + 0x4de],BL
00543566  89 9E E7 04 00 00         MOV dword ptr [ESI + 0x4e7],EBX
0054356C  89 9E EB 04 00 00         MOV dword ptr [ESI + 0x4eb],EBX
00543572  89 9E F7 04 00 00         MOV dword ptr [ESI + 0x4f7],EBX
00543578  89 9E F3 04 00 00         MOV dword ptr [ESI + 0x4f3],EBX
0054357E  89 9E EF 04 00 00         MOV dword ptr [ESI + 0x4ef],EBX
00543584  8B C6                     MOV EAX,ESI
00543586  5F                        POP EDI
00543587  5E                        POP ESI
00543588  A3 30 2A 80 00            MOV [0x00802a30],EAX
0054358D  5B                        POP EBX
0054358E  C3                        RET
LAB_0054358f:
0054358F  33 C0                     XOR EAX,EAX
00543591  5E                        POP ESI
00543592  A3 30 2A 80 00            MOV [0x00802a30],EAX
00543597  5B                        POP EBX
00543598  C3                        RET
