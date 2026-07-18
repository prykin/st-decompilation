FUN_0074fbf6:
0074FBF6  53                        PUSH EBX
0074FBF7  56                        PUSH ESI
0074FBF8  8B F1                     MOV ESI,ECX
0074FBFA  33 DB                     XOR EBX,EBX
0074FBFC  39 5E 08                  CMP dword ptr [ESI + 0x8],EBX
0074FBFF  76 3D                     JBE 0x0074fc3e
0074FC01  57                        PUSH EDI
0074FC02  33 FF                     XOR EDI,EDI
LAB_0074fc04:
0074FC04  8B 06                     MOV EAX,dword ptr [ESI]
0074FC06  03 C7                     ADD EAX,EDI
0074FC08  0F B7 08                  MOVZX ECX,word ptr [EAX]
0074FC0B  83 E9 08                  SUB ECX,0x8
0074FC0E  74 13                     JZ 0x0074fc23
0074FC10  49                        DEC ECX
0074FC11  74 05                     JZ 0x0074fc18
0074FC13  83 E9 04                  SUB ECX,0x4
0074FC16  75 1C                     JNZ 0x0074fc34
LAB_0074fc18:
0074FC18  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0074FC1B  50                        PUSH EAX
0074FC1C  8B 08                     MOV ECX,dword ptr [EAX]
0074FC1E  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FC21  EB 11                     JMP 0x0074fc34
LAB_0074fc23:
0074FC23  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0074FC26  85 C0                     TEST EAX,EAX
0074FC28  74 0A                     JZ 0x0074fc34
0074FC2A  83 C0 FE                  ADD EAX,-0x2
0074FC2D  50                        PUSH EAX
0074FC2E  E8 7D E6 FD FF            CALL 0x0072e2b0
0074FC33  59                        POP ECX
LAB_0074fc34:
0074FC34  43                        INC EBX
0074FC35  83 C7 10                  ADD EDI,0x10
0074FC38  3B 5E 08                  CMP EBX,dword ptr [ESI + 0x8]
0074FC3B  72 C7                     JC 0x0074fc04
0074FC3D  5F                        POP EDI
LAB_0074fc3e:
0074FC3E  FF 36                     PUSH dword ptr [ESI]
0074FC40  E8 6B E6 FD FF            CALL 0x0072e2b0
0074FC45  59                        POP ECX
0074FC46  5E                        POP ESI
0074FC47  5B                        POP EBX
0074FC48  C3                        RET
