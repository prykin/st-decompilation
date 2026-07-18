FUN_0074d60a:
0074D60A  53                        PUSH EBX
0074D60B  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074D60F  56                        PUSH ESI
0074D610  57                        PUSH EDI
0074D611  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
LAB_0074d615:
0074D615  66 8B 03                  MOV AX,word ptr [EBX]
0074D618  66 8B 17                  MOV DX,word ptr [EDI]
0074D61B  8B C8                     MOV ECX,EAX
0074D61D  8B F2                     MOV ESI,EDX
0074D61F  66 83 F9 41               CMP CX,0x41
0074D623  72 09                     JC 0x0074d62e
0074D625  66 83 F9 5A               CMP CX,0x5a
0074D629  77 03                     JA 0x0074d62e
0074D62B  83 C1 20                  ADD ECX,0x20
LAB_0074d62e:
0074D62E  66 83 FE 41               CMP SI,0x41
0074D632  72 09                     JC 0x0074d63d
0074D634  66 83 FE 5A               CMP SI,0x5a
0074D638  77 03                     JA 0x0074d63d
0074D63A  83 C6 20                  ADD ESI,0x20
LAB_0074d63d:
0074D63D  66 3B CE                  CMP CX,SI
0074D640  75 10                     JNZ 0x0074d652
0074D642  43                        INC EBX
0074D643  43                        INC EBX
0074D644  66 85 C0                  TEST AX,AX
0074D647  74 13                     JZ 0x0074d65c
0074D649  47                        INC EDI
0074D64A  47                        INC EDI
0074D64B  66 85 D2                  TEST DX,DX
0074D64E  74 0C                     JZ 0x0074d65c
0074D650  EB C3                     JMP 0x0074d615
LAB_0074d652:
0074D652  0F B7 C1                  MOVZX EAX,CX
0074D655  0F B7 CE                  MOVZX ECX,SI
0074D658  2B C1                     SUB EAX,ECX
0074D65A  EB 02                     JMP 0x0074d65e
LAB_0074d65c:
0074D65C  33 C0                     XOR EAX,EAX
LAB_0074d65e:
0074D65E  5F                        POP EDI
0074D65F  5E                        POP ESI
0074D660  5B                        POP EBX
0074D661  C2 08 00                  RET 0x8
