FUN_0074ca21:
0074CA21  56                        PUSH ESI
0074CA22  8B F1                     MOV ESI,ECX
0074CA24  83 7E 40 00               CMP dword ptr [ESI + 0x40],0x0
0074CA28  75 07                     JNZ 0x0074ca31
0074CA2A  B8 5F 02 04 80            MOV EAX,0x8004025f
0074CA2F  EB 6F                     JMP 0x0074caa0
LAB_0074ca31:
0074CA31  83 7C 24 08 01            CMP dword ptr [ESP + 0x8],0x1
0074CA36  75 1F                     JNZ 0x0074ca57
0074CA38  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074CA3E  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074CA42  74 5A                     JZ 0x0074ca9e
0074CA44  85 C0                     TEST EAX,EAX
0074CA46  74 05                     JZ 0x0074ca4d
0074CA48  83 C0 0C                  ADD EAX,0xc
0074CA4B  EB 02                     JMP 0x0074ca4f
LAB_0074ca4d:
0074CA4D  33 C0                     XOR EAX,EAX
LAB_0074ca4f:
0074CA4F  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074CA55  EB 39                     JMP 0x0074ca90
LAB_0074ca57:
0074CA57  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074CA5D  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074CA61  74 3B                     JZ 0x0074ca9e
0074CA63  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
0074CA69  83 C0 1C                  ADD EAX,0x1c
0074CA6C  50                        PUSH EAX
0074CA6D  83 C1 1C                  ADD ECX,0x1c
0074CA70  E8 80 EF FF FF            CALL 0x0074b9f5
0074CA75  85 C0                     TEST EAX,EAX
0074CA77  74 25                     JZ 0x0074ca9e
0074CA79  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074CA7F  85 C0                     TEST EAX,EAX
0074CA81  74 05                     JZ 0x0074ca88
0074CA83  83 C0 0C                  ADD EAX,0xc
0074CA86  EB 02                     JMP 0x0074ca8a
LAB_0074ca88:
0074CA88  33 C0                     XOR EAX,EAX
LAB_0074ca8a:
0074CA8A  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
LAB_0074ca90:
0074CA90  83 C1 1C                  ADD ECX,0x1c
0074CA93  51                        PUSH ECX
0074CA94  50                        PUSH EAX
0074CA95  8B CE                     MOV ECX,ESI
0074CA97  E8 8D A9 FF FF            CALL 0x00747429
0074CA9C  EB 02                     JMP 0x0074caa0
LAB_0074ca9e:
0074CA9E  33 C0                     XOR EAX,EAX
LAB_0074caa0:
0074CAA0  5E                        POP ESI
0074CAA1  C2 08 00                  RET 0x8
