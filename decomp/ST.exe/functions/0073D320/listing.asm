FUN_0073d320:
0073D320  55                        PUSH EBP
0073D321  8B EC                     MOV EBP,ESP
0073D323  51                        PUSH ECX
0073D324  83 3D EC A5 85 00 00      CMP dword ptr [0x0085a5ec],0x0
0073D32B  75 05                     JNZ 0x0073d332
0073D32D  E8 8E 97 FF FF            CALL 0x00736ac0
LAB_0073d332:
0073D332  A1 94 A5 85 00            MOV EAX,[0x0085a594]
0073D337  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D33A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D33D  33 D2                     XOR EDX,EDX
0073D33F  8A 11                     MOV DL,byte ptr [ECX]
0073D341  83 FA 22                  CMP EDX,0x22
0073D344  75 56                     JNZ 0x0073d39c
LAB_0073d346:
0073D346  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D349  83 C0 01                  ADD EAX,0x1
0073D34C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D34F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D352  33 D2                     XOR EDX,EDX
0073D354  8A 11                     MOV DL,byte ptr [ECX]
0073D356  83 FA 22                  CMP EDX,0x22
0073D359  74 2A                     JZ 0x0073d385
0073D35B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D35E  33 C9                     XOR ECX,ECX
0073D360  8A 08                     MOV CL,byte ptr [EAX]
0073D362  85 C9                     TEST ECX,ECX
0073D364  74 1F                     JZ 0x0073d385
0073D366  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D369  33 C0                     XOR EAX,EAX
0073D36B  8A 02                     MOV AL,byte ptr [EDX]
0073D36D  50                        PUSH EAX
0073D36E  E8 3D 72 00 00            CALL 0x007445b0
0073D373  83 C4 04                  ADD ESP,0x4
0073D376  85 C0                     TEST EAX,EAX
0073D378  74 09                     JZ 0x0073d383
0073D37A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D37D  83 C1 01                  ADD ECX,0x1
0073D380  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073d383:
0073D383  EB C1                     JMP 0x0073d346
LAB_0073d385:
0073D385  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D388  33 C0                     XOR EAX,EAX
0073D38A  8A 02                     MOV AL,byte ptr [EDX]
0073D38C  83 F8 22                  CMP EAX,0x22
0073D38F  75 09                     JNZ 0x0073d39a
0073D391  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D394  83 C1 01                  ADD ECX,0x1
0073D397  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073d39a:
0073D39A  EB 17                     JMP 0x0073d3b3
LAB_0073d39c:
0073D39C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D39F  33 C0                     XOR EAX,EAX
0073D3A1  8A 02                     MOV AL,byte ptr [EDX]
0073D3A3  83 F8 20                  CMP EAX,0x20
0073D3A6  7E 0B                     JLE 0x0073d3b3
0073D3A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D3AB  83 C1 01                  ADD ECX,0x1
0073D3AE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073D3B1  EB E9                     JMP 0x0073d39c
LAB_0073d3b3:
0073D3B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073D3B6  33 C0                     XOR EAX,EAX
0073D3B8  8A 02                     MOV AL,byte ptr [EDX]
0073D3BA  85 C0                     TEST EAX,EAX
0073D3BC  74 17                     JZ 0x0073d3d5
0073D3BE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073D3C1  33 D2                     XOR EDX,EDX
0073D3C3  8A 11                     MOV DL,byte ptr [ECX]
0073D3C5  83 FA 20                  CMP EDX,0x20
0073D3C8  7F 0B                     JG 0x0073d3d5
0073D3CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D3CD  83 C0 01                  ADD EAX,0x1
0073D3D0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073D3D3  EB DE                     JMP 0x0073d3b3
LAB_0073d3d5:
0073D3D5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D3D8  8B E5                     MOV ESP,EBP
0073D3DA  5D                        POP EBP
0073D3DB  C3                        RET
