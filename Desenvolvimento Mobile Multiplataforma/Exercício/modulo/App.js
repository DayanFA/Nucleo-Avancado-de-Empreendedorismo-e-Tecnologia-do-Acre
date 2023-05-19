import React from 'react';
import {NavigationContainer, StackActions} from "@react-navigation/native";
import {createNativeStackNavigator} from '@react-navigation/native-stack';

import cadastro_usuario from "./src/pages/cadastro_usuario";
import Lista from "./src/pages/Lista";
import Home from "./src/pages/Home";
import Login from "./src/pages/Login";


const Stack = createNativeStackNavigator();

export default function projeto() {
    return( 
      <NavigationContainer>
        <Stack.Navigator>
          <Stack.Screen
            name="Página Inicial"
            component={Home}
            options={{
              headerShown: false
            }}
            />
            <Stack.Screen
            name="Cadastro de usuário"
            component={cadastro_usuario}
            options={{
              title:"Tela principal",
              HeaderStyle:{
                backgroundColor:'#00F'
              },
            }}
            />
            <Stack.Screen
              name="Lista de usuário"
              component={Lista}
            />
             <Stack.Screen
              name="Login"
              component={Login}
            />
          </Stack.Navigator>
      </NavigationContainer>
    );
}