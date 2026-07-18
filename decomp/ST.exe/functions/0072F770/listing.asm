FUN_0072f770:
0072F770  55                        PUSH EBP
0072F771  8B EC                     MOV EBP,ESP
0072F773  83 EC 08                  SUB ESP,0x8
0072F776  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0072F77D  83 3D 34 12 7F 00 00      CMP dword ptr [0x007f1234],0x0
0072F784  75 1E                     JNZ 0x0072f7a4
0072F786  68 67 01 00 00            PUSH 0x167
0072F78B  68 F4 FE 79 00            PUSH 0x79fef4
0072F790  6A 02                     PUSH 0x2
0072F792  68 51 03 00 00            PUSH 0x351
0072F797  E8 68 19 CD FF            CALL 0x00401104
0072F79C  83 C4 10                  ADD ESP,0x10
0072F79F  A3 34 12 7F 00            MOV [0x007f1234],EAX
LAB_0072f7a4:
0072F7A4  A1 34 12 7F 00            MOV EAX,[0x007f1234]
0072F7A9  C6 00 00                  MOV byte ptr [EAX],0x0
0072F7AC  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0072F7B3  EB 09                     JMP 0x0072f7be
LAB_0072f7b5:
0072F7B5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F7B8  83 C1 01                  ADD ECX,0x1
0072F7BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0072f7be:
0072F7BE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F7C1  6B D2 0C                  IMUL EDX,EDX,0xc
0072F7C4  8B 82 34 12 7F 00         MOV EAX,dword ptr [EDX + 0x7f1234]
0072F7CA  50                        PUSH EAX
0072F7CB  68 00 FF 79 00            PUSH 0x79ff00
0072F7D0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F7D3  6B C9 0C                  IMUL ECX,ECX,0xc
0072F7D6  8B 91 30 12 7F 00         MOV EDX,dword ptr [ECX + 0x7f1230]
0072F7DC  52                        PUSH EDX
0072F7DD  6A 03                     PUSH 0x3
0072F7DF  A1 34 12 7F 00            MOV EAX,[0x007f1234]
0072F7E4  50                        PUSH EAX
0072F7E5  E8 26 02 00 00            CALL 0x0072fa10
0072F7EA  83 C4 14                  ADD ESP,0x14
0072F7ED  83 7D FC 05               CMP dword ptr [EBP + -0x4],0x5
0072F7F1  7D 46                     JGE 0x0072f839
0072F7F3  68 EC FE 79 00            PUSH 0x79feec
0072F7F8  8B 0D 34 12 7F 00         MOV ECX,dword ptr [0x007f1234]
0072F7FE  51                        PUSH ECX
0072F7FF  E8 4C AA 00 00            CALL 0x0073a250
0072F804  83 C4 08                  ADD ESP,0x8
0072F807  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F80A  83 C2 01                  ADD EDX,0x1
0072F80D  6B D2 0C                  IMUL EDX,EDX,0xc
0072F810  8B 82 34 12 7F 00         MOV EAX,dword ptr [EDX + 0x7f1234]
0072F816  50                        PUSH EAX
0072F817  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F81A  6B C9 0C                  IMUL ECX,ECX,0xc
0072F81D  8B 91 34 12 7F 00         MOV EDX,dword ptr [ECX + 0x7f1234]
0072F823  52                        PUSH EDX
0072F824  E8 07 A9 00 00            CALL 0x0073a130
0072F829  83 C4 08                  ADD ESP,0x8
0072F82C  85 C0                     TEST EAX,EAX
0072F82E  74 07                     JZ 0x0072f837
0072F830  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0072f837:
0072F837  EB 2E                     JMP 0x0072f867
LAB_0072f839:
0072F839  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0072F83D  75 07                     JNZ 0x0072f846
0072F83F  A1 34 12 7F 00            MOV EAX,[0x007f1234]
0072F844  EB 26                     JMP 0x0072f86c
LAB_0072f846:
0072F846  6A 02                     PUSH 0x2
0072F848  A1 34 12 7F 00            MOV EAX,[0x007f1234]
0072F84D  50                        PUSH EAX
0072F84E  E8 B9 4C CD FF            CALL 0x0040450c
0072F853  83 C4 08                  ADD ESP,0x8
0072F856  C7 05 34 12 7F 00 00 00 00 00  MOV dword ptr [0x007f1234],0x0
0072F860  A1 4C 12 7F 00            MOV EAX,[0x007f124c]
0072F865  EB 05                     JMP 0x0072f86c
LAB_0072f867:
0072F867  E9 49 FF FF FF            JMP 0x0072f7b5
LAB_0072f86c:
0072F86C  8B E5                     MOV ESP,EBP
0072F86E  5D                        POP EBP
0072F86F  C3                        RET
