FUN_00734760:
00734760  55                        PUSH EBP
00734761  8B EC                     MOV EBP,ESP
00734763  51                        PUSH ECX
00734764  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073476B  7E 13                     JLE 0x00734780
0073476D  6A 08                     PUSH 0x8
0073476F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734772  50                        PUSH EAX
00734773  E8 98 BE FF FF            CALL 0x00730610
00734778  83 C4 08                  ADD ESP,0x8
0073477B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073477E  EB 15                     JMP 0x00734795
LAB_00734780:
00734780  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734783  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
00734789  33 C0                     XOR EAX,EAX
0073478B  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
0073478F  83 E0 08                  AND EAX,0x8
00734792  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00734795:
00734795  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734798  8B E5                     MOV ESP,EBP
0073479A  5D                        POP EBP
0073479B  C3                        RET
