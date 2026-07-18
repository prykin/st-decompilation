FUN_0073cd20:
0073CD20  55                        PUSH EBP
0073CD21  8B EC                     MOV EBP,ESP
0073CD23  83 EC 08                  SUB ESP,0x8
0073CD26  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073CD29  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073CD2C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073CD2F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073cd32:
0073CD32  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073CD35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073CD38  83 E8 01                  SUB EAX,0x1
0073CD3B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073CD3E  85 D2                     TEST EDX,EDX
0073CD40  74 15                     JZ 0x0073cd57
0073CD42  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CD45  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073CD48  85 D2                     TEST EDX,EDX
0073CD4A  74 0B                     JZ 0x0073cd57
0073CD4C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CD4F  83 C0 01                  ADD EAX,0x1
0073CD52  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073CD55  EB DB                     JMP 0x0073cd32
LAB_0073cd57:
0073CD57  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CD5A  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073CD5D  85 D2                     TEST EDX,EDX
0073CD5F  75 08                     JNZ 0x0073cd69
0073CD61  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CD64  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
0073CD67  EB 03                     JMP 0x0073cd6c
LAB_0073cd69:
0073CD69  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0073cd6c:
0073CD6C  8B E5                     MOV ESP,EBP
0073CD6E  5D                        POP EBP
0073CD6F  C3                        RET
