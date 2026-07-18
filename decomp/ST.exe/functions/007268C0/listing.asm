FUN_007268c0:
007268C0  55                        PUSH EBP
007268C1  8B EC                     MOV EBP,ESP
007268C3  83 EC 50                  SUB ESP,0x50
007268C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007268CB  56                        PUSH ESI
007268CC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007268CF  8D 4D B0                  LEA ECX,[EBP + -0x50]
007268D2  6A 00                     PUSH 0x0
007268D4  52                        PUSH EDX
007268D5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007268D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007268DE  E8 0D 6F 00 00            CALL 0x0072d7f0
007268E3  8B F0                     MOV ESI,EAX
007268E5  83 C4 08                  ADD ESP,0x8
007268E8  85 F6                     TEST ESI,ESI
007268EA  75 43                     JNZ 0x0072692f
007268EC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007268EF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007268F2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007268F5  50                        PUSH EAX
007268F6  51                        PUSH ECX
007268F7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007268FA  52                        PUSH EDX
007268FB  6A 15                     PUSH 0x15
007268FD  E8 0E BA FC FF            CALL 0x006f2310
00726902  85 C0                     TEST EAX,EAX
00726904  75 17                     JNZ 0x0072691d
00726906  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072690B  68 88 01 00 00            PUSH 0x188
00726910  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726915  50                        PUSH EAX
00726916  6A FC                     PUSH -0x4
00726918  E8 23 F5 F7 FF            CALL 0x006a5e40
LAB_0072691d:
0072691D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00726920  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00726924  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072692A  5E                        POP ESI
0072692B  8B E5                     MOV ESP,EBP
0072692D  5D                        POP EBP
0072692E  C3                        RET
LAB_0072692f:
0072692F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726932  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00726935  85 C0                     TEST EAX,EAX
00726937  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072693D  75 0C                     JNZ 0x0072694b
0072693F  83 FE FC                  CMP ESI,-0x4
00726942  75 07                     JNZ 0x0072694b
00726944  8B C6                     MOV EAX,ESI
00726946  5E                        POP ESI
00726947  8B E5                     MOV ESP,EBP
00726949  5D                        POP EBP
0072694A  C3                        RET
LAB_0072694b:
0072694B  68 0C 0D 7F 00            PUSH 0x7f0d0c
00726950  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726955  56                        PUSH ESI
00726956  6A 00                     PUSH 0x0
00726958  68 8C 01 00 00            PUSH 0x18c
0072695D  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726962  E8 69 6B F8 FF            CALL 0x006ad4d0
00726967  83 C4 18                  ADD ESP,0x18
0072696A  85 C0                     TEST EAX,EAX
0072696C  74 01                     JZ 0x0072696f
0072696E  CC                        INT3
LAB_0072696f:
0072696F  68 8E 01 00 00            PUSH 0x18e
00726974  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726979  6A 00                     PUSH 0x0
0072697B  56                        PUSH ESI
0072697C  E8 BF F4 F7 FF            CALL 0x006a5e40
00726981  85 F6                     TEST ESI,ESI
00726983  7D 07                     JGE 0x0072698c
00726985  8B C6                     MOV EAX,ESI
00726987  5E                        POP ESI
00726988  8B E5                     MOV ESP,EBP
0072698A  5D                        POP EBP
0072698B  C3                        RET
LAB_0072698c:
0072698C  83 C8 FF                  OR EAX,0xffffffff
0072698F  5E                        POP ESI
00726990  8B E5                     MOV ESP,EBP
00726992  5D                        POP EBP
00726993  C3                        RET
