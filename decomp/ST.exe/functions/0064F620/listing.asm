FUN_0064f620:
0064F620  55                        PUSH EBP
0064F621  8B EC                     MOV EBP,ESP
0064F623  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064F626  53                        PUSH EBX
0064F627  33 D2                     XOR EDX,EDX
0064F629  33 C9                     XOR ECX,ECX
0064F62B  B3 08                     MOV BL,0x8
LAB_0064f62d:
0064F62D  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
0064F634  75 69                     JNZ 0x0064f69f
0064F636  41                        INC ECX
0064F637  83 F9 01                  CMP ECX,0x1
0064F63A  7C F1                     JL 0x0064f62d
0064F63C  66 8B 08                  MOV CX,word ptr [EAX]
0064F63F  66 83 F9 02               CMP CX,0x2
0064F643  7D 0E                     JGE 0x0064f653
0064F645  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0064f648:
0064F648  66 83 F9 03               CMP CX,0x3
0064F64C  7D 12                     JGE 0x0064f660
0064F64E  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0064F651  EB 1A                     JMP 0x0064f66d
LAB_0064f653:
0064F653  38 98 D1 00 00 00         CMP byte ptr [EAX + 0xd1],BL
0064F659  74 ED                     JZ 0x0064f648
0064F65B  33 C0                     XOR EAX,EAX
0064F65D  5B                        POP EBX
0064F65E  5D                        POP EBP
0064F65F  C3                        RET
LAB_0064f660:
0064F660  38 98 D2 00 00 00         CMP byte ptr [EAX + 0xd2],BL
0064F666  74 05                     JZ 0x0064f66d
0064F668  33 C0                     XOR EAX,EAX
0064F66A  5B                        POP EBX
0064F66B  5D                        POP EBP
0064F66C  C3                        RET
LAB_0064f66d:
0064F66D  83 CA FF                  OR EDX,0xffffffff
0064F670  66 83 F9 04               CMP CX,0x4
0064F674  7D 14                     JGE 0x0064f68a
0064F676  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
LAB_0064f679:
0064F679  66 83 F9 05               CMP CX,0x5
0064F67D  7D 18                     JGE 0x0064f697
0064F67F  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0064F682  B8 01 00 00 00            MOV EAX,0x1
0064F687  5B                        POP EBX
0064F688  5D                        POP EBP
0064F689  C3                        RET
LAB_0064f68a:
0064F68A  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
0064F690  74 E7                     JZ 0x0064f679
0064F692  33 C0                     XOR EAX,EAX
0064F694  5B                        POP EBX
0064F695  5D                        POP EBP
0064F696  C3                        RET
LAB_0064f697:
0064F697  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
0064F69D  74 05                     JZ 0x0064f6a4
LAB_0064f69f:
0064F69F  33 C0                     XOR EAX,EAX
0064F6A1  5B                        POP EBX
0064F6A2  5D                        POP EBP
0064F6A3  C3                        RET
LAB_0064f6a4:
0064F6A4  B8 01 00 00 00            MOV EAX,0x1
0064F6A9  5B                        POP EBX
0064F6AA  5D                        POP EBP
0064F6AB  C3                        RET
