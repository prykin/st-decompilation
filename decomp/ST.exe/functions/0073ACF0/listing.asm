FUN_0073acf0:
0073ACF0  55                        PUSH EBP
0073ACF1  8B EC                     MOV EBP,ESP
0073ACF3  51                        PUSH ECX
0073ACF4  A1 84 72 85 00            MOV EAX,[0x00857284]
0073ACF9  50                        PUSH EAX
0073ACFA  E8 11 BF FF FF            CALL 0x00736c10
0073ACFF  83 C4 04                  ADD ESP,0x4
0073AD02  33 C9                     XOR ECX,ECX
0073AD04  83 F8 03                  CMP EAX,0x3
0073AD07  0F 94 C1                  SETZ CL
0073AD0A  89 0D 80 72 85 00         MOV dword ptr [0x00857280],ECX
0073AD10  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073AD17  74 09                     JZ 0x0073ad22
0073AD19  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0073AD20  EB 12                     JMP 0x0073ad34
LAB_0073ad22:
0073AD22  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073AD28  52                        PUSH EDX
0073AD29  E8 72 06 00 00            CALL 0x0073b3a0
0073AD2E  83 C4 04                  ADD ESP,0x4
0073AD31  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073ad34:
0073AD34  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073AD37  A3 7C 72 85 00            MOV [0x0085727c],EAX
0073AD3C  6A 01                     PUSH 0x1
0073AD3E  68 70 AD 73 00            PUSH 0x73ad70
0073AD43  FF 15 14 BC 85 00         CALL dword ptr [0x0085bc14]
0073AD49  8B 0D 8C 72 85 00         MOV ECX,dword ptr [0x0085728c]
0073AD4F  83 E1 04                  AND ECX,0x4
0073AD52  85 C9                     TEST ECX,ECX
0073AD54  75 0A                     JNZ 0x0073ad60
0073AD56  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
LAB_0073ad60:
0073AD60  8B E5                     MOV ESP,EBP
0073AD62  5D                        POP EBP
0073AD63  C3                        RET
