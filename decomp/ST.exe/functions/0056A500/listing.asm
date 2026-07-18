FUN_0056a500:
0056A500  55                        PUSH EBP
0056A501  8B EC                     MOV EBP,ESP
0056A503  83 EC 28                  SUB ESP,0x28
0056A506  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0056A50D  75 7B                     JNZ 0x0056a58a
0056A50F  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0056A515  8B 15 20 67 80 00         MOV EDX,dword ptr [0x00806720]
0056A51B  8B C8                     MOV ECX,EAX
0056A51D  2B CA                     SUB ECX,EDX
0056A51F  81 F9 F4 01 00 00         CMP ECX,0x1f4
0056A525  72 63                     JC 0x0056a58a
0056A527  A3 20 67 80 00            MOV [0x00806720],EAX
0056A52C  A0 7E 87 80 00            MOV AL,[0x0080877e]
0056A531  84 C0                     TEST AL,AL
0056A533  C6 45 DA 05               MOV byte ptr [EBP + -0x26],0x5
0056A537  74 34                     JZ 0x0056a56d
0056A539  8A 15 3B 73 80 00         MOV DL,byte ptr [0x0080733b]
0056A53F  A1 54 87 80 00            MOV EAX,[0x00808754]
0056A544  6A FF                     PUSH -0x1
0056A546  6A 00                     PUSH 0x0
0056A548  8D 4D D8                  LEA ECX,[EBP + -0x28]
0056A54B  6A 26                     PUSH 0x26
0056A54D  88 55 E4                  MOV byte ptr [EBP + -0x1c],DL
0056A550  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0056A556  51                        PUSH ECX
0056A557  6A 1A                     PUSH 0x1a
0056A559  6A 00                     PUSH 0x0
0056A55B  52                        PUSH EDX
0056A55C  89 45 E6                  MOV dword ptr [EBP + -0x1a],EAX
0056A55F  E8 FC AD 1A 00            CALL 0x00715360
0056A564  83 C4 1C                  ADD ESP,0x1c
0056A567  33 C0                     XOR EAX,EAX
0056A569  8B E5                     MOV ESP,EBP
0056A56B  5D                        POP EBP
0056A56C  C3                        RET
LAB_0056a56d:
0056A56D  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0056A573  6A FF                     PUSH -0x1
0056A575  6A 00                     PUSH 0x0
0056A577  8D 45 D8                  LEA EAX,[EBP + -0x28]
0056A57A  6A 26                     PUSH 0x26
0056A57C  50                        PUSH EAX
0056A57D  6A 1A                     PUSH 0x1a
0056A57F  6A 01                     PUSH 0x1
0056A581  51                        PUSH ECX
0056A582  E8 D9 AD 1A 00            CALL 0x00715360
0056A587  83 C4 1C                  ADD ESP,0x1c
LAB_0056a58a:
0056A58A  33 C0                     XOR EAX,EAX
0056A58C  8B E5                     MOV ESP,EBP
0056A58E  5D                        POP EBP
0056A58F  C3                        RET
