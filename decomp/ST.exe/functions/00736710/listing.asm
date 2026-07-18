setSBCS:
00736710  55                        PUSH EBP
00736711  8B EC                     MOV EBP,ESP
00736713  51                        PUSH ECX
00736714  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073671B  EB 09                     JMP 0x00736726
LAB_0073671d:
0073671D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00736720  83 C0 01                  ADD EAX,0x1
00736723  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00736726:
00736726  81 7D FC 01 01 00 00      CMP dword ptr [EBP + -0x4],0x101
0073672D  7D 0C                     JGE 0x0073673b
0073672F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00736732  C6 81 80 A4 85 00 00      MOV byte ptr [ECX + 0x85a480],0x0
00736739  EB E2                     JMP 0x0073671d
LAB_0073673b:
0073673B  C7 05 E0 A2 85 00 00 00 00 00  MOV dword ptr [0x0085a2e0],0x0
00736745  C7 05 6C A3 85 00 00 00 00 00  MOV dword ptr [0x0085a36c],0x0
0073674F  C7 05 84 A5 85 00 00 00 00 00  MOV dword ptr [0x0085a584],0x0
00736759  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00736760  EB 09                     JMP 0x0073676b
LAB_00736762:
00736762  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00736765  83 C2 01                  ADD EDX,0x1
00736768  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073676b:
0073676B  83 7D FC 06               CMP dword ptr [EBP + -0x4],0x6
0073676F  7D 0F                     JGE 0x00736780
00736771  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00736774  66 C7 04 45 60 A3 85 00 00 00  MOV word ptr [EAX*0x2 + 0x85a360],0x0
0073677E  EB E2                     JMP 0x00736762
LAB_00736780:
00736780  8B E5                     MOV ESP,EBP
00736782  5D                        POP EBP
00736783  C3                        RET
